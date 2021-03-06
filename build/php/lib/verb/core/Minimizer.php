<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;
use \haxe\Exception;

class Minimizer {
	/**
	 * @param \Closure $f
	 * @param \Array_hx $x
	 * 
	 * @return \Array_hx
	 */
	public static function numericalGradient ($f, $x) {
		#src/verb/core/Minimizer.hx:81: characters 9-26
		$n = $x->length;
		#src/verb/core/Minimizer.hx:82: characters 9-23
		$f0 = $f($x);
		#src/verb/core/Minimizer.hx:84: characters 9-33
		if (Boot::equal($f0, \Math::$NaN)) {
			#src/verb/core/Minimizer.hx:84: characters 28-33
			throw Exception::thrown("gradient: f(x) is a NaN!");
		}
		#src/verb/core/Minimizer.hx:86: characters 9-46
		$i = null;
		$x0 = $x->slice(0);
		$f1 = null;
		$f2 = null;
		$J = new \Array_hx();
		#src/verb/core/Minimizer.hx:88: characters 9-40
		$errest = null;
		$roundoff = null;
		$eps = 1e-3;
		#src/verb/core/Minimizer.hx:89: characters 9-35
		$t0 = null;
		$t1 = null;
		$t2 = null;
		$it = 0;
		$d1 = null;
		$d2 = null;
		$N = null;
		#src/verb/core/Minimizer.hx:91: characters 19-23
		$_g = 0;
		#src/verb/core/Minimizer.hx:91: characters 23-24
		$_g1 = $n;
		#src/verb/core/Minimizer.hx:91: lines 91-118
		while ($_g < $_g1) {
			#src/verb/core/Minimizer.hx:91: characters 19-24
			$i = $_g++;
			#src/verb/core/Minimizer.hx:93: characters 21-46
			$a = 1e-6 * $f0;
			#src/verb/core/Minimizer.hx:93: characters 13-47
			$h = (\is_nan($a) || \is_nan(1e-8) ? \Math::$NaN : \max($a, 1e-8));
			#src/verb/core/Minimizer.hx:95: lines 95-117
			while (true) {
				#src/verb/core/Minimizer.hx:96: characters 17-21
				++$it;
				#src/verb/core/Minimizer.hx:97: characters 17-66
				if ($it > 20) {
					#src/verb/core/Minimizer.hx:97: characters 31-36
					throw Exception::thrown("Numerical gradient fails");
				}
				#src/verb/core/Minimizer.hx:98: characters 17-31
				$x0->offsetSet($i, ($x->arr[$i] ?? null) + $h);
				#src/verb/core/Minimizer.hx:99: characters 17-27
				$f1 = $f($x0);
				#src/verb/core/Minimizer.hx:100: characters 17-31
				$x0->offsetSet($i, ($x->arr[$i] ?? null) - $h);
				#src/verb/core/Minimizer.hx:101: characters 17-27
				$f2 = $f($x0);
				#src/verb/core/Minimizer.hx:102: characters 17-29
				$x0->offsetSet($i, ($x->arr[$i] ?? null));
				#src/verb/core/Minimizer.hx:104: characters 17-74
				if (\is_nan($f1) || \is_nan($f2)) {
					#src/verb/core/Minimizer.hx:104: characters 56-61
					$h /= 16;
					#src/verb/core/Minimizer.hx:104: characters 63-71
					continue;
				}
				#src/verb/core/Minimizer.hx:106: characters 17-37
				$J->offsetSet($i, ($f1 - $f2) / (2 * $h));
				#src/verb/core/Minimizer.hx:107: characters 17-28
				$t0 = ($x->arr[$i] ?? null) - $h;
				#src/verb/core/Minimizer.hx:108: characters 17-26
				$t1 = ($x->arr[$i] ?? null);
				#src/verb/core/Minimizer.hx:109: characters 17-28
				$t2 = ($x->arr[$i] ?? null) + $h;
				#src/verb/core/Minimizer.hx:110: characters 17-31
				$d1 = ($f1 - $f0) / $h;
				#src/verb/core/Minimizer.hx:111: characters 17-31
				$d2 = ($f0 - $f2) / $h;
				#src/verb/core/Minimizer.hx:112: characters 31-45
				$N1 = \abs(($J->arr[$i] ?? null));
				#src/verb/core/Minimizer.hx:112: characters 47-59
				$N2 = \abs($f0);
				#src/verb/core/Minimizer.hx:112: characters 61-73
				$N3 = \abs($f1);
				#src/verb/core/Minimizer.hx:112: characters 75-87
				$N4 = \abs($f2);
				#src/verb/core/Minimizer.hx:112: characters 89-101
				$N5 = \abs($t0);
				#src/verb/core/Minimizer.hx:112: characters 103-115
				$N6 = \abs($t1);
				#src/verb/core/Minimizer.hx:112: characters 17-138
				$N = Vec::max(\Array_hx::wrap([
					$N1,
					$N2,
					$N3,
					$N4,
					$N5,
					$N6,
					\abs($t2),
					1e-8,
				]));
				#src/verb/core/Minimizer.hx:114: characters 45-62
				$a1 = \abs($d1 - ($J->arr[$i] ?? null));
				#src/verb/core/Minimizer.hx:114: characters 64-81
				$a2 = \abs($d2 - ($J->arr[$i] ?? null));
				#src/verb/core/Minimizer.hx:114: characters 26-108
				$a3 = Vec::max(\Array_hx::wrap([
					$a1,
					$a2,
					\abs($d1 - $d2),
				])) / $N;
				$b = $h / $N;
				$errest = (\is_nan($a3) || \is_nan($b) ? \Math::$NaN : \min($a3, $b));
				#src/verb/core/Minimizer.hx:116: characters 17-53
				if ($errest > $eps) {
					#src/verb/core/Minimizer.hx:116: characters 34-39
					$h /= 16;
				} else {
					#src/verb/core/Minimizer.hx:116: characters 48-53
					break;
				}
			}
		}
		#src/verb/core/Minimizer.hx:120: characters 9-17
		return $J;
	}

	/**
	 * @param \Array_hx $x
	 * @param \Array_hx $y
	 * 
	 * @return \Array_hx
	 */
	public static function tensor ($x, $y) {
		#src/verb/core/Minimizer.hx:125: characters 9-48
		$m = $x->length;
		$n = $y->length;
		$Ai = null;
		$xi = null;
		#src/verb/core/Minimizer.hx:126: characters 9-38
		$A = new \Array_hx();
		#src/verb/core/Minimizer.hx:127: characters 9-21
		$i = $m - 1;
		#src/verb/core/Minimizer.hx:128: lines 128-145
		while ($i >= 0) {
			#src/verb/core/Minimizer.hx:129: characters 13-20
			$Ai = new \Array_hx();
			#src/verb/core/Minimizer.hx:130: characters 13-22
			$xi = ($x->arr[$i] ?? null);
			#src/verb/core/Minimizer.hx:131: characters 13-25
			$j = $n - 1;
			#src/verb/core/Minimizer.hx:132: lines 132-141
			while ($j >= 3) {
				#src/verb/core/Minimizer.hx:133: characters 17-34
				$Ai->offsetSet($j, $xi * ($y->arr[$j] ?? null));
				#src/verb/core/Minimizer.hx:134: characters 17-20
				--$j;
				#src/verb/core/Minimizer.hx:135: characters 17-34
				$Ai->offsetSet($j, $xi * ($y->arr[$j] ?? null));
				#src/verb/core/Minimizer.hx:136: characters 17-20
				--$j;
				#src/verb/core/Minimizer.hx:137: characters 17-34
				$Ai->offsetSet($j, $xi * ($y->arr[$j] ?? null));
				#src/verb/core/Minimizer.hx:138: characters 17-20
				--$j;
				#src/verb/core/Minimizer.hx:139: characters 17-34
				$Ai->offsetSet($j, $xi * ($y->arr[$j] ?? null));
				#src/verb/core/Minimizer.hx:140: characters 17-20
				--$j;
			}
			#src/verb/core/Minimizer.hx:142: characters 13-52
			while ($j >= 0) {
				#src/verb/core/Minimizer.hx:142: characters 27-44
				$Ai->offsetSet($j, $xi * ($y->arr[$j] ?? null));
				#src/verb/core/Minimizer.hx:142: characters 46-49
				--$j;
			}
			#src/verb/core/Minimizer.hx:143: characters 13-22
			$A->offsetSet($i, $Ai);
			#src/verb/core/Minimizer.hx:144: characters 13-16
			--$i;
		}
		#src/verb/core/Minimizer.hx:146: characters 9-17
		return $A;
	}

	/**
	 * @param \Closure $f
	 * @param \Array_hx $x0
	 * @param float $tol
	 * @param \Closure $gradient
	 * @param int $maxit
	 * 
	 * @return MinimizationResult
	 */
	public static function uncmin ($f, $x0, $tol = null, $gradient = null, $maxit = null) {
		#src/verb/core/Minimizer.hx:12: characters 9-40
		if ($tol === null) {
			#src/verb/core/Minimizer.hx:12: characters 27-37
			$tol = 1e-8;
		}
		#src/verb/core/Minimizer.hx:13: characters 9-92
		if ($gradient === null) {
			#src/verb/core/Minimizer.hx:13: characters 32-89
			$gradient = function ($x) use (&$f) {
				#src/verb/core/Minimizer.hx:13: characters 57-86
				return Minimizer::numericalGradient($f, $x);
			};
		}
		#src/verb/core/Minimizer.hx:14: characters 9-39
		if ($maxit === null) {
			#src/verb/core/Minimizer.hx:14: characters 27-39
			$maxit = 1000;
		}
		#src/verb/core/Minimizer.hx:16: characters 9-25
		$x0 = $x0->slice(0);
		#src/verb/core/Minimizer.hx:17: characters 9-27
		$n = $x0->length;
		#src/verb/core/Minimizer.hx:18: characters 9-37
		$f0 = $f($x0);
		$f1 = $f0;
		$df0 = null;
		#src/verb/core/Minimizer.hx:20: characters 9-33
		if (\is_nan($f0)) {
			#src/verb/core/Minimizer.hx:20: characters 28-33
			throw Exception::thrown("uncmin: f(x0) is a NaN!");
		}
		#src/verb/core/Minimizer.hx:22: characters 15-47
		$b = Constants::$EPSILON;
		$tol = (\is_nan($tol) || \is_nan($b) ? \Math::$NaN : \max($tol, $b));
		#src/verb/core/Minimizer.hx:23: characters 9-26
		$step = null;
		#src/verb/core/Minimizer.hx:25: characters 9-16
		$g1 = null;
		#src/verb/core/Minimizer.hx:26: characters 9-34
		$H1 = Mat::identity($n);
		#src/verb/core/Minimizer.hx:27: characters 9-51
		$it = 0;
		$i = null;
		$x1 = null;
		$y = null;
		$Hy = null;
		$Hs = null;
		$ys = null;
		$i0 = null;
		$t = null;
		$nstep = null;
		$t1 = null;
		$t2 = null;
		#src/verb/core/Minimizer.hx:28: characters 9-28
		$s = new \Array_hx();
		#src/verb/core/Minimizer.hx:29: characters 9-22
		$msg = "";
		#src/verb/core/Minimizer.hx:24: characters 9-16
		$g0 = $gradient($x0);
		#src/verb/core/Minimizer.hx:32: lines 32-74
		while ($it < $maxit) {
			#src/verb/core/Minimizer.hx:34: characters 13-90
			if (!Vec::all(Vec::finite($g0))) {
				#src/verb/core/Minimizer.hx:34: characters 44-80
				$msg = "Gradient has Infinity or NaN";
				#src/verb/core/Minimizer.hx:34: characters 82-87
				break;
			}
			#src/verb/core/Minimizer.hx:35: characters 13-43
			$step = Vec::neg(Mat::dot($H1, $g0));
			#src/verb/core/Minimizer.hx:37: characters 13-100
			if (!Vec::all(Vec::finite($step))) {
				#src/verb/core/Minimizer.hx:37: characters 46-90
				$msg = "Search direction has Infinity or NaN";
				#src/verb/core/Minimizer.hx:37: characters 92-97
				break;
			}
			#src/verb/core/Minimizer.hx:39: characters 13-35
			$nstep = Vec::norm($step);
			#src/verb/core/Minimizer.hx:40: characters 13-76
			if ($nstep < $tol) {
				#src/verb/core/Minimizer.hx:40: characters 31-66
				$msg = "Newton step smaller than tol";
				#src/verb/core/Minimizer.hx:40: characters 68-73
				break;
			}
			#src/verb/core/Minimizer.hx:42: characters 13-20
			$t = 1.0;
			#src/verb/core/Minimizer.hx:43: characters 13-35
			$df0 = Vec::dot($g0, $step);
			#src/verb/core/Minimizer.hx:46: characters 13-20
			$x1 = $x0;
			#src/verb/core/Minimizer.hx:47: lines 47-58
			while ($it < $maxit) {
				#src/verb/core/Minimizer.hx:48: characters 17-45
				if (($t * $nstep) < $tol) {
					#src/verb/core/Minimizer.hx:48: characters 37-42
					break;
				}
				#src/verb/core/Minimizer.hx:49: characters 17-37
				$s = Vec::mul($t, $step);
				#src/verb/core/Minimizer.hx:50: characters 17-35
				$x1 = Vec::add($x0, $s);
				#src/verb/core/Minimizer.hx:51: characters 17-27
				$f1 = $f($x1);
				#src/verb/core/Minimizer.hx:52: lines 52-56
				if ((($f1 - $f0) >= (0.1 * $t * $df0)) || \is_nan($f1)) {
					#src/verb/core/Minimizer.hx:53: characters 21-29
					$t *= 0.5;
					#src/verb/core/Minimizer.hx:54: characters 21-25
					++$it;
					#src/verb/core/Minimizer.hx:55: characters 21-29
					continue;
				}
				#src/verb/core/Minimizer.hx:57: characters 17-22
				break;
			}
			#src/verb/core/Minimizer.hx:60: characters 13-89
			if (($t * $nstep) < $tol) {
				#src/verb/core/Minimizer.hx:60: characters 33-79
				$msg = "Line search step size smaller than tol";
				#src/verb/core/Minimizer.hx:60: characters 81-86
				break;
			}
			#src/verb/core/Minimizer.hx:61: characters 13-81
			if ($it === $maxit) {
				#src/verb/core/Minimizer.hx:61: characters 31-71
				$msg = "maxit reached during line search";
				#src/verb/core/Minimizer.hx:61: characters 73-78
				break;
			}
			#src/verb/core/Minimizer.hx:63: characters 13-30
			$g1 = $gradient($x1);
			#src/verb/core/Minimizer.hx:64: characters 13-31
			$y = Vec::sub($g1, $g0);
			#src/verb/core/Minimizer.hx:65: characters 13-30
			$ys = Vec::dot($y, $s);
			#src/verb/core/Minimizer.hx:66: characters 13-31
			$Hy = Mat::dot($H1, $y);
			#src/verb/core/Minimizer.hx:67: lines 67-69
			$H1 = Mat::sub(Mat::add($H1, Mat::mul(($ys + Vec::dot($y, $Hy)) / ($ys * $ys), Minimizer::tensor($s, $s))), Mat::div(Mat::add(Minimizer::tensor($Hy, $s), Minimizer::tensor($s, $Hy)), $ys));
			#src/verb/core/Minimizer.hx:70: characters 13-20
			$x0 = $x1;
			#src/verb/core/Minimizer.hx:71: characters 13-20
			$f0 = $f1;
			#src/verb/core/Minimizer.hx:72: characters 13-20
			$g0 = $g1;
			#src/verb/core/Minimizer.hx:73: characters 13-17
			++$it;
		}
		#src/verb/core/Minimizer.hx:76: characters 9-64
		return new MinimizationResult($x0, $f0, $g0, $H1, $it, $msg);
	}
}

Boot::registerClass(Minimizer::class, 'verb.core.Minimizer');
