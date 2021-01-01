<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\eval_hx;

use \verb\core\NurbsSurfaceData;
use \php\Boot;
use \verb\core\Constants;
use \verb\core\Mat;
use \verb\core\Vec;
use \verb\core\NurbsCurveData;

class Divide {
	/**
	 * @param NurbsCurveData $curve
	 * @param float $u
	 * 
	 * @return \Array_hx
	 */
	public static function curveSplit ($curve, $u) {
		#src/verb/eval/Divide.hx:87: lines 87-89
		$degree = $curve->degree;
		$controlPoints = $curve->controlPoints;
		$knots = $curve->knots;
		#src/verb/eval/Divide.hx:91: characters 39-66
		$_g = new \Array_hx();
		#src/verb/eval/Divide.hx:91: characters 50-54
		$_g1 = 0;
		#src/verb/eval/Divide.hx:91: characters 54-62
		$_g2 = $degree + 1;
		#src/verb/eval/Divide.hx:91: characters 40-65
		while ($_g1 < $_g2) {
			#src/verb/eval/Divide.hx:91: characters 50-62
			$i = $_g1++;
			#src/verb/eval/Divide.hx:91: characters 64-65
			$_g->arr[$_g->length++] = $u;
		}
		#src/verb/eval/Divide.hx:91: characters 9-67
		$knots_to_insert = $_g;
		#src/verb/eval/Divide.hx:92: characters 9-68
		$res = Modify::curveKnotRefine($curve, $knots_to_insert);
		#src/verb/eval/Divide.hx:94: characters 9-51
		$s = Eval_hx::knotSpan($degree, $u, $knots);
		#src/verb/eval/Divide.hx:96: characters 9-57
		$knots0 = $res->knots->slice(0, $s + $degree + 2);
		#src/verb/eval/Divide.hx:97: characters 9-47
		$knots1 = $res->knots->slice($s + 1);
		#src/verb/eval/Divide.hx:99: characters 9-57
		$cpts0 = $res->controlPoints->slice(0, $s + 1);
		#src/verb/eval/Divide.hx:100: characters 9-54
		$cpts1 = $res->controlPoints->slice($s + 1);
		#src/verb/eval/Divide.hx:103: characters 13-56
		$tmp = new NurbsCurveData($degree, $knots0, $cpts0);
		#src/verb/eval/Divide.hx:102: lines 102-105
		return \Array_hx::wrap([
			$tmp,
			new NurbsCurveData($degree, $knots1, $cpts1),
		]);
	}

	/**
	 * @param NurbsCurveData $curve
	 * @param float $l
	 * 
	 * @return \Array_hx
	 */
	public static function rationalCurveByArcLength ($curve, $l) {
		#src/verb/eval/Divide.hx:144: lines 144-147
		$crvs = Modify::decomposeCurveIntoBeziers($curve);
		#src/verb/eval/Divide.hx:145: characters 21-93
		$result = [];
		$data = $crvs->arr;
		$_g_current = 0;
		$_g_length = \count($data);
		$_g_data = $data;
		while ($_g_current < $_g_length) {
			$item = $_g_data[$_g_current++];
			$result[] = Analyze::rationalBezierCurveArcLength($item);
		}
		#src/verb/eval/Divide.hx:144: lines 144-147
		$crvlens = \Array_hx::wrap($result);
		$totlen = Vec::sum($crvlens);
		$pts = \Array_hx::wrap([new CurveLengthSample(($curve->knots->arr[0] ?? null), 0.0)]);
		#src/verb/eval/Divide.hx:149: characters 9-35
		if ($l > $totlen) {
			#src/verb/eval/Divide.hx:149: characters 25-35
			return $pts;
		}
		#src/verb/eval/Divide.hx:151: lines 151-156
		$inc = $l;
		$i = 0;
		$lc = $inc;
		$runsum = 0.0;
		$runsum1 = 0.0;
		$u = null;
		#src/verb/eval/Divide.hx:158: lines 158-175
		while ($i < $crvs->length) {
			#src/verb/eval/Divide.hx:160: characters 13-33
			$runsum += ($crvlens->arr[$i] ?? null);
			#src/verb/eval/Divide.hx:162: lines 162-169
			while ($lc < ($runsum + Constants::$EPSILON)) {
				#src/verb/eval/Divide.hx:164: characters 17-18
				$u = Analyze::rationalBezierCurveParamAtArcLength(($crvs->arr[$i] ?? null), $lc - $runsum1, Constants::$TOLERANCE, ($crvlens->arr[$i] ?? null));
				#src/verb/eval/Divide.hx:166: characters 17-59
				$x = new CurveLengthSample($u, $lc);
				$pts->arr[$pts->length++] = $x;
				#src/verb/eval/Divide.hx:167: characters 17-26
				$lc += $inc;
			}
			#src/verb/eval/Divide.hx:171: characters 13-34
			$runsum1 += ($crvlens->arr[$i] ?? null);
			#src/verb/eval/Divide.hx:173: characters 13-16
			++$i;
		}
		#src/verb/eval/Divide.hx:177: characters 9-19
		return $pts;
	}

	/**
	 * @param NurbsCurveData $curve
	 * @param int $num
	 * 
	 * @return \Array_hx
	 */
	public static function rationalCurveByEqualArcLength ($curve, $num) {
		#src/verb/eval/Divide.hx:124: characters 9-60
		$tlen = Analyze::rationalCurveArcLength($curve);
		#src/verb/eval/Divide.hx:125: characters 9-30
		$inc = $tlen / $num;
		#src/verb/eval/Divide.hx:127: characters 9-59
		return Divide::rationalCurveByArcLength($curve, $inc);
	}

	/**
	 * @param NurbsSurfaceData $surface
	 * @param float $u
	 * @param bool $useV
	 * 
	 * @return \Array_hx
	 */
	public static function surfaceSplit ($surface, $u, $useV = false) {
		#src/verb/eval/Divide.hx:27: lines 27-72
		if ($useV === null) {
			$useV = false;
		}
		#src/verb/eval/Divide.hx:29: lines 29-31
		$knots = null;
		$degree = null;
		$controlPoints = null;
		#src/verb/eval/Divide.hx:33: lines 33-41
		if (!$useV) {
			#src/verb/eval/Divide.hx:34: characters 13-68
			$controlPoints = Mat::transposeN($surface->controlPoints);
			#src/verb/eval/Divide.hx:35: characters 13-35
			$knots = $surface->knotsU;
			#src/verb/eval/Divide.hx:36: characters 13-37
			$degree = $surface->degreeU;
		} else {
			#src/verb/eval/Divide.hx:38: characters 13-50
			$controlPoints = $surface->controlPoints;
			#src/verb/eval/Divide.hx:39: characters 13-35
			$knots = $surface->knotsV;
			#src/verb/eval/Divide.hx:40: characters 13-37
			$degree = $surface->degreeV;
		}
		#src/verb/eval/Divide.hx:43: characters 31-60
		$_g = new \Array_hx();
		#src/verb/eval/Divide.hx:43: characters 43-47
		$_g1 = 0;
		#src/verb/eval/Divide.hx:43: characters 47-55
		$_g2 = $degree + 1;
		#src/verb/eval/Divide.hx:43: characters 33-58
		while ($_g1 < $_g2) {
			#src/verb/eval/Divide.hx:43: characters 43-55
			$i = $_g1++;
			#src/verb/eval/Divide.hx:43: characters 57-58
			$_g->arr[$_g->length++] = $u;
		}
		#src/verb/eval/Divide.hx:43: characters 9-61
		$knots_to_insert = $_g;
		#src/verb/eval/Divide.hx:45: lines 45-46
		$newpts0 = new \Array_hx();
		$newpts1 = new \Array_hx();
		#src/verb/eval/Divide.hx:48: characters 9-51
		$s = Eval_hx::knotSpan($degree, $u, $knots);
		#src/verb/eval/Divide.hx:49: characters 9-41
		$res = null;
		#src/verb/eval/Divide.hx:51: lines 51-56
		$_g = 0;
		while ($_g < $controlPoints->length) {
			#src/verb/eval/Divide.hx:51: characters 14-17
			$cps = ($controlPoints->arr[$_g] ?? null);
			#src/verb/eval/Divide.hx:51: lines 51-56
			++$_g;
			#src/verb/eval/Divide.hx:52: characters 13-100
			$res = Modify::curveKnotRefine(new NurbsCurveData($degree, $knots, $cps), $knots_to_insert);
			#src/verb/eval/Divide.hx:54: characters 13-64
			$x = $res->controlPoints->slice(0, $s + 1);
			$newpts0->arr[$newpts0->length++] = $x;
			#src/verb/eval/Divide.hx:55: characters 13-61
			$x1 = $res->controlPoints->slice($s + 1);
			$newpts1->arr[$newpts1->length++] = $x1;
		}
		#src/verb/eval/Divide.hx:58: characters 9-57
		$knots0 = $res->knots->slice(0, $s + $degree + 2);
		#src/verb/eval/Divide.hx:59: characters 9-47
		$knots1 = $res->knots->slice($s + 1);
		#src/verb/eval/Divide.hx:61: lines 61-67
		if (!$useV) {
			#src/verb/eval/Divide.hx:62: characters 13-48
			$newpts0 = Mat::transposeN($newpts0);
			#src/verb/eval/Divide.hx:63: characters 13-48
			$newpts1 = Mat::transposeN($newpts1);
			#src/verb/eval/Divide.hx:65: characters 51-66
			$surface1 = $surface->degreeV;
			#src/verb/eval/Divide.hx:65: characters 22-108
			$tmp = new NurbsSurfaceData($degree, $surface1, $knots0, (clone $surface->knotsV), $newpts0);
			#src/verb/eval/Divide.hx:66: characters 42-57
			$surface1 = $surface->degreeV;
			#src/verb/eval/Divide.hx:65: lines 65-66
			return \Array_hx::wrap([
				$tmp,
				new NurbsSurfaceData($degree, $surface1, $knots1, (clone $surface->knotsV), $newpts1),
			]);
		}
		#src/verb/eval/Divide.hx:70: characters 39-54
		$surface1 = $surface->degreeU;
		#src/verb/eval/Divide.hx:70: characters 18-104
		$tmp = new NurbsSurfaceData($surface1, $degree, (clone $surface->knotsU), $knots0, $newpts0);
		#src/verb/eval/Divide.hx:71: characters 30-45
		$surface1 = $surface->degreeU;
		#src/verb/eval/Divide.hx:70: lines 70-71
		return \Array_hx::wrap([
			$tmp,
			new NurbsSurfaceData($surface1, $degree, (clone $surface->knotsU), $knots1, $newpts1),
		]);
	}
}

Boot::registerClass(Divide::class, 'verb.eval.Divide');