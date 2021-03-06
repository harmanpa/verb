<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class Vec {
	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return \Array_hx
	 */
	public static function add ($a, $b) {
		#src/verb/core/Vec.hx:220: characters 16-55
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:220: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:220: characters 32-40
		$_g2 = $a->length;
		#src/verb/core/Vec.hx:220: characters 18-53
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:220: characters 28-40
			$i = $_g1++;
			#src/verb/core/Vec.hx:220: characters 42-53
			$tmp = ($a->arr[$i] ?? null) + ($b->arr[$i] ?? null);
			$_g->arr[$_g->length++] = $tmp;
		}
		#src/verb/core/Vec.hx:220: characters 16-55
		return $_g;
	}

	/**
	 * @param object $a
	 * 
	 * @return \Array_hx
	 */
	public static function addAll ($a) {
		#src/verb/core/Vec.hx:143: characters 9-30
		$i = $a->iterator();
		#src/verb/core/Vec.hx:144: characters 9-38
		if (!$i->hasNext()) {
			#src/verb/core/Vec.hx:144: characters 27-38
			return null;
		}
		#src/verb/core/Vec.hx:146: characters 9-33
		$f = $i->next()->length;
		#src/verb/core/Vec.hx:148: characters 9-70
		return \Lambda::fold($a, function ($x, $a) {
			#src/verb/core/Vec.hx:148: characters 38-53
			return Vec::add($a, $x);
		}, Vec::rep($f, 0.0));
	}

	/**
	 * @param \Array_hx $a
	 * 
	 * @return void
	 */
	public static function addAllMutate ($a) {
		#src/verb/core/Vec.hx:152: characters 9-22
		$f = ($a->arr[0] ?? null);
		#src/verb/core/Vec.hx:153: characters 19-23
		$_g = 1;
		#src/verb/core/Vec.hx:153: characters 23-31
		$_g1 = $a->length;
		#src/verb/core/Vec.hx:153: lines 153-154
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:153: characters 19-31
			$i = $_g++;
			#src/verb/core/Vec.hx:154: characters 13-31
			Vec::addMutate($f, ($a->arr[$i] ?? null));
		}
	}

	/**
	 * @param \Array_hx $a
	 * @param float $s
	 * @param \Array_hx $b
	 * 
	 * @return void
	 */
	public static function addMulMutate ($a, $s, $b) {
		#src/verb/core/Vec.hx:158: characters 19-23
		$_g = 0;
		#src/verb/core/Vec.hx:158: characters 23-31
		$_g1 = $a->length;
		#src/verb/core/Vec.hx:158: lines 158-159
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:158: characters 19-31
			$i = $_g++;
			#src/verb/core/Vec.hx:159: characters 13-35
			$a[$i] += $s * ($b->arr[$i] ?? null);
		}
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return void
	 */
	public static function addMutate ($a, $b) {
		#src/verb/core/Vec.hx:168: characters 19-23
		$_g = 0;
		#src/verb/core/Vec.hx:168: characters 23-31
		$_g1 = $a->length;
		#src/verb/core/Vec.hx:168: lines 168-169
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:168: characters 19-31
			$i = $_g++;
			#src/verb/core/Vec.hx:169: characters 13-31
			$a[$i] += ($b->arr[$i] ?? null);
		}
	}

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return bool
	 */
	public static function all ($arr) {
		#src/verb/core/Vec.hx:107: characters 9-63
		return \Lambda::fold($arr, function ($x, $a) {
			#src/verb/core/Vec.hx:107: characters 47-53
			if ($a) {
				#src/verb/core/Vec.hx:107: characters 52-53
				return $x;
			} else {
				#src/verb/core/Vec.hx:107: characters 47-53
				return false;
			}
		}, true);
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return float
	 */
	public static function angleBetween ($a, $b) {
		#src/verb/core/Vec.hx:17: characters 16-63
		return \acos(Vec::dot($a, $b) / (Vec::norm($a) * Vec::norm($b)));
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return float
	 */
	public static function angleBetweenNormalized2d ($a, $b) {
		#src/verb/core/Vec.hx:57: characters 9-47
		$perpDot = ($a->arr[0] ?? null) * ($b->arr[1] ?? null) - ($a->arr[1] ?? null) * ($b->arr[0] ?? null);
		#src/verb/core/Vec.hx:58: characters 16-46
		return \atan2($perpDot, Vec::dot($a, $b));
	}

	/**
	 * @param \Array_hx $u
	 * @param \Array_hx $v
	 * 
	 * @return \Array_hx
	 */
	public static function cross ($u, $v) {
		#src/verb/core/Vec.hx:127: characters 9-77
		return \Array_hx::wrap([
			($u->arr[1] ?? null) * ($v->arr[2] ?? null) - ($u->arr[2] ?? null) * ($v->arr[1] ?? null),
			($u->arr[2] ?? null) * ($v->arr[0] ?? null) - ($u->arr[0] ?? null) * ($v->arr[2] ?? null),
			($u->arr[0] ?? null) * ($v->arr[1] ?? null) - ($u->arr[1] ?? null) * ($v->arr[0] ?? null),
		]);
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return float
	 */
	public static function dist ($a, $b) {
		#src/verb/core/Vec.hx:131: characters 9-30
		return Vec::norm(Vec::sub($a, $b));
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return float
	 */
	public static function distSquared ($a, $b) {
		#src/verb/core/Vec.hx:135: characters 9-37
		return Vec::normSquared(Vec::sub($a, $b));
	}

	/**
	 * @param \Array_hx $a
	 * @param float $b
	 * 
	 * @return \Array_hx
	 */
	public static function div ($a, $b) {
		#src/verb/core/Vec.hx:228: characters 16-52
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:228: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:228: characters 32-40
		$_g2 = $a->length;
		#src/verb/core/Vec.hx:228: characters 18-50
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:228: characters 28-40
			$i = $_g1++;
			#src/verb/core/Vec.hx:228: characters 42-50
			$tmp = ($a->arr[$i] ?? null) / $b;
			$_g->arr[$_g->length++] = $tmp;
		}
		#src/verb/core/Vec.hx:228: characters 16-52
		return $_g;
	}

	/**
	 * @param \Array_hx $a
	 * 
	 * @return float
	 */
	public static function domain ($a) {
		#src/verb/core/Vec.hx:62: characters 9-36
		return ArrayExtensions::last($a) - ArrayExtensions::first($a);
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return float
	 */
	public static function dot ($a, $b) {
		#src/verb/core/Vec.hx:212: characters 9-29
		$sum = 0;
		#src/verb/core/Vec.hx:213: characters 19-23
		$_g = 0;
		#src/verb/core/Vec.hx:213: characters 23-31
		$_g1 = $a->length;
		#src/verb/core/Vec.hx:213: lines 213-215
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:213: characters 19-31
			$i = $_g++;
			#src/verb/core/Vec.hx:214: characters 13-31
			$sum += ($a->arr[$i] ?? null) * ($b->arr[$i] ?? null);
		}
		#src/verb/core/Vec.hx:216: characters 9-19
		return $sum;
	}

	/**
	 * @param int $num
	 * @param float $ele
	 * 
	 * @return \Array_hx
	 */
	public static function fill ($num, $ele) {
		#src/verb/core/Vec.hx:196: characters 16-42
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:196: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:196: characters 32-35
		$_g2 = $num;
		#src/verb/core/Vec.hx:196: characters 18-40
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:196: characters 28-35
			$i = $_g1++;
			#src/verb/core/Vec.hx:196: characters 37-40
			$_g->arr[$_g->length++] = $ele;
		}
		#src/verb/core/Vec.hx:196: characters 16-42
		return $_g;
	}

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return \Array_hx
	 */
	public static function finite ($arr) {
		#src/verb/core/Vec.hx:111: characters 16-64
		$result = [];
		$data = $arr->arr;
		$_g_current = 0;
		$_g_length = \count($data);
		$_g_data = $data;
		while ($_g_current < $_g_length) {
			$item = $_g_data[$_g_current++];
			$result[] = \is_finite($item);
		}
		return \Array_hx::wrap($result);
	}

	/**
	 * @param \Array_hx $vec
	 * 
	 * @return bool
	 */
	public static function isZero ($vec) {
		#src/verb/core/Vec.hx:237: characters 19-23
		$_g = 0;
		#src/verb/core/Vec.hx:237: characters 23-33
		$_g1 = $vec->length;
		#src/verb/core/Vec.hx:237: lines 237-239
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:237: characters 19-33
			$i = $_g++;
			#src/verb/core/Vec.hx:238: characters 13-82
			if (\abs(($vec->arr[$i] ?? null)) > Constants::$TOLERANCE) {
				#src/verb/core/Vec.hx:238: characters 70-82
				return false;
			}
		}
		#src/verb/core/Vec.hx:241: characters 9-20
		return true;
	}

	/**
	 * @param float $i
	 * @param \Array_hx $u
	 * @param \Array_hx $v
	 * 
	 * @return \Array_hx
	 */
	public static function lerp ($i, $u, $v) {
		#src/verb/core/Vec.hx:119: characters 9-64
		return Vec::add(Vec::mul($i, $u), Vec::mul(1.0 - $i, $v));
	}

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return float
	 */
	public static function max ($arr) {
		#src/verb/core/Vec.hx:103: characters 9-88
		return \Lambda::fold($arr, function ($x, $a) {
			#src/verb/core/Vec.hx:103: characters 47-60
			if (\is_nan($x) || \is_nan($a)) {
				return \Math::$NaN;
			} else {
				return \max($x, $a);
			}
		}, \Math::$NEGATIVE_INFINITY);
	}

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return float
	 */
	public static function min ($arr) {
		#src/verb/core/Vec.hx:99: characters 9-88
		return \Lambda::fold($arr, function ($x, $a) {
			#src/verb/core/Vec.hx:99: characters 47-60
			if (\is_nan($x) || \is_nan($a)) {
				return \Math::$NaN;
			} else {
				return \min($x, $a);
			}
		}, \Math::$POSITIVE_INFINITY);
	}

	/**
	 * @param float $a
	 * @param \Array_hx $b
	 * 
	 * @return \Array_hx
	 */
	public static function mul ($a, $b) {
		#src/verb/core/Vec.hx:224: characters 16-52
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:224: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:224: characters 32-40
		$_g2 = $b->length;
		#src/verb/core/Vec.hx:224: characters 18-50
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:224: characters 28-40
			$i = $_g1++;
			#src/verb/core/Vec.hx:224: characters 42-50
			$tmp = $a * ($b->arr[$i] ?? null);
			$_g->arr[$_g->length++] = $tmp;
		}
		#src/verb/core/Vec.hx:224: characters 16-52
		return $_g;
	}

	/**
	 * @param float $a
	 * @param \Array_hx $b
	 * 
	 * @return void
	 */
	public static function mulMutate ($a, $b) {
		#src/verb/core/Vec.hx:178: characters 19-23
		$_g = 0;
		#src/verb/core/Vec.hx:178: characters 23-31
		$_g1 = $b->length;
		#src/verb/core/Vec.hx:178: lines 178-179
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:178: characters 19-31
			$i = $_g++;
			#src/verb/core/Vec.hx:179: characters 13-28
			$b[$i] *= $a;
		}
	}

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return \Array_hx
	 */
	public static function neg ($arr) {
		#src/verb/core/Vec.hx:95: characters 16-50
		$result = [];
		$data = $arr->arr;
		$_g_current = 0;
		$_g_length = \count($data);
		$_g_data = $data;
		while ($_g_current < $_g_length) {
			$item = $_g_data[$_g_current++];
			$result[] = (-$item);
		}
		return \Array_hx::wrap($result);
	}

	/**
	 * @param \Array_hx $a
	 * 
	 * @return float
	 */
	public static function norm ($a) {
		#src/verb/core/Vec.hx:183: characters 9-36
		$norm2 = Vec::normSquared($a);
		#src/verb/core/Vec.hx:184: characters 16-57
		if (!Boot::equal($norm2, 0.0)) {
			#src/verb/core/Vec.hx:184: characters 31-49
			return \sqrt($norm2);
		} else {
			#src/verb/core/Vec.hx:184: characters 52-57
			return $norm2;
		}
	}

	/**
	 * @param \Array_hx $a
	 * 
	 * @return float
	 */
	public static function normSquared ($a) {
		#src/verb/core/Vec.hx:188: characters 9-61
		return \Lambda::fold($a, function ($x, $a) {
			#src/verb/core/Vec.hx:188: characters 38-54
			return $a + $x * $x;
		}, 0);
	}

	/**
	 * @param \Array_hx $arr
	 * 
	 * @return \Array_hx
	 */
	public static function normalized ($arr) {
		#src/verb/core/Vec.hx:123: characters 9-37
		return Vec::div($arr, Vec::norm($arr));
	}

	/**
	 * @param \Array_hx $origin
	 * @param \Array_hx $dir
	 * @param float $u
	 * 
	 * @return \Array_hx
	 */
	public static function onRay ($origin, $dir, $u) {
		#src/verb/core/Vec.hx:115: characters 9-50
		return Vec::add($origin, Vec::mul($u, $dir));
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * @param \Array_hx $n
	 * 
	 * @return float
	 */
	public static function positiveAngleBetween ($a, $b, $n) {
		#src/verb/core/Vec.hx:21: characters 9-34
		$nab = Vec::cross($a, $b);
		#src/verb/core/Vec.hx:23: characters 9-30
		$al = Vec::norm($a);
		#src/verb/core/Vec.hx:24: characters 9-30
		$bl = Vec::norm($b);
		#src/verb/core/Vec.hx:25: characters 9-27
		$abl = $al * $bl;
		#src/verb/core/Vec.hx:26: characters 9-32
		$adb = Vec::dot($a, $b);
		#src/verb/core/Vec.hx:28: characters 9-40
		$sina = Vec::norm($nab) / $abl;
		#src/verb/core/Vec.hx:29: characters 9-30
		$cosa = $adb / $abl;
		#src/verb/core/Vec.hx:31: characters 9-42
		$w = \atan2($sina, $cosa);
		#src/verb/core/Vec.hx:32: characters 9-33
		$s = Vec::dot($n, $nab);
		#src/verb/core/Vec.hx:34: characters 9-54
		if (\abs($s) < Constants::$EPSILON) {
			#src/verb/core/Vec.hx:34: characters 46-54
			return $w;
		}
		#src/verb/core/Vec.hx:36: characters 16-30
		if ($s > 0) {
			#src/verb/core/Vec.hx:36: characters 24-25
			return $w;
		} else {
			#src/verb/core/Vec.hx:36: characters 28-30
			return -$w;
		}
	}

	/**
	 * @param int $max
	 * 
	 * @return \Array_hx
	 */
	public static function range ($max) {
		#src/verb/core/Vec.hx:66: characters 9-20
		$l = new \Array_hx();
		#src/verb/core/Vec.hx:67: characters 9-21
		$f = 0.0;
		#src/verb/core/Vec.hx:68: characters 20-24
		$_g = 0;
		#src/verb/core/Vec.hx:68: characters 24-27
		$_g1 = $max;
		#src/verb/core/Vec.hx:68: lines 68-71
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:68: characters 20-27
			$i = $_g++;
			#src/verb/core/Vec.hx:69: characters 13-22
			$l->arr[$l->length++] = $f;
			#src/verb/core/Vec.hx:70: characters 13-21
			$f += 1.0;
		}
		#src/verb/core/Vec.hx:72: characters 9-17
		return $l;
	}

	/**
	 * @param int $num
	 * @param mixed $ele
	 * 
	 * @return \Array_hx
	 */
	public static function rep ($num, $ele) {
		#src/verb/core/Vec.hx:192: characters 16-42
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:192: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:192: characters 32-35
		$_g2 = $num;
		#src/verb/core/Vec.hx:192: characters 18-40
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:192: characters 28-35
			$i = $_g1++;
			#src/verb/core/Vec.hx:192: characters 37-40
			$_g->arr[$_g->length++] = $ele;
		}
		#src/verb/core/Vec.hx:192: characters 16-42
		return $_g;
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * @param \Array_hx $n
	 * 
	 * @return float
	 */
	public static function signedAngleBetween ($a, $b, $n) {
		#src/verb/core/Vec.hx:40: characters 9-34
		$nab = Vec::cross($a, $b);
		#src/verb/core/Vec.hx:42: characters 9-30
		$al = Vec::norm($a);
		#src/verb/core/Vec.hx:43: characters 9-30
		$bl = Vec::norm($b);
		#src/verb/core/Vec.hx:44: characters 9-27
		$abl = $al * $bl;
		#src/verb/core/Vec.hx:45: characters 9-32
		$adb = Vec::dot($a, $b);
		#src/verb/core/Vec.hx:47: characters 9-40
		$sina = Vec::norm($nab) / $abl;
		#src/verb/core/Vec.hx:48: characters 9-30
		$cosa = $adb / $abl;
		#src/verb/core/Vec.hx:50: characters 9-42
		$w = \atan2($sina, $cosa);
		#src/verb/core/Vec.hx:51: characters 9-33
		$s = Vec::dot($n, $nab);
		#src/verb/core/Vec.hx:53: characters 16-45
		if ($s > 0.0) {
			#src/verb/core/Vec.hx:53: characters 26-27
			return $w;
		} else {
			#src/verb/core/Vec.hx:53: characters 30-45
			return 2 * \Math::$PI - $w;
		}
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return \Array_hx
	 */
	public static function sortedSetSub ($a, $b) {
		#src/verb/core/Vec.hx:290: characters 9-25
		$result = new \Array_hx();
		#src/verb/core/Vec.hx:292: characters 9-20
		$ai = 0;
		#src/verb/core/Vec.hx:293: characters 9-20
		$bi = 0;
		#src/verb/core/Vec.hx:294: lines 294-310
		while ($ai < $a->length) {
			#src/verb/core/Vec.hx:296: lines 296-300
			if ($bi >= $b->length) {
				#src/verb/core/Vec.hx:297: characters 30-35
				$a1 = ($a->arr[$ai] ?? null);
				#src/verb/core/Vec.hx:297: characters 17-37
				$result->arr[$result->length++] = $a1;
				#src/verb/core/Vec.hx:298: characters 17-21
				++$ai;
				#src/verb/core/Vec.hx:299: characters 17-25
				continue;
			}
			#src/verb/core/Vec.hx:302: lines 302-306
			if (\abs(($a->arr[$ai] ?? null) - ($b->arr[$bi] ?? null)) < Constants::$EPSILON) {
				#src/verb/core/Vec.hx:303: characters 17-21
				++$ai;
				#src/verb/core/Vec.hx:304: characters 17-21
				++$bi;
				#src/verb/core/Vec.hx:305: characters 17-25
				continue;
			}
			#src/verb/core/Vec.hx:308: characters 26-31
			$a2 = ($a->arr[$ai] ?? null);
			#src/verb/core/Vec.hx:308: characters 13-33
			$result->arr[$result->length++] = $a2;
			#src/verb/core/Vec.hx:309: characters 13-17
			++$ai;
		}
		#src/verb/core/Vec.hx:312: characters 9-22
		return $result;
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return \Array_hx
	 */
	public static function sortedSetUnion ($a, $b) {
		#src/verb/core/Vec.hx:246: characters 9-25
		$merged = new \Array_hx();
		#src/verb/core/Vec.hx:248: characters 9-20
		$ai = 0;
		#src/verb/core/Vec.hx:249: characters 9-20
		$bi = 0;
		#src/verb/core/Vec.hx:250: lines 250-282
		while (($ai < $a->length) || ($bi < $b->length)) {
			#src/verb/core/Vec.hx:252: lines 252-260
			if ($ai >= $a->length) {
				#src/verb/core/Vec.hx:253: characters 30-35
				$b1 = ($b->arr[$bi] ?? null);
				#src/verb/core/Vec.hx:253: characters 17-37
				$merged->arr[$merged->length++] = $b1;
				#src/verb/core/Vec.hx:254: characters 17-21
				++$bi;
				#src/verb/core/Vec.hx:255: characters 17-25
				continue;
			} else if ($bi >= $b->length) {
				#src/verb/core/Vec.hx:257: characters 30-35
				$a1 = ($a->arr[$ai] ?? null);
				#src/verb/core/Vec.hx:257: characters 17-37
				$merged->arr[$merged->length++] = $a1;
				#src/verb/core/Vec.hx:258: characters 17-21
				++$ai;
				#src/verb/core/Vec.hx:259: characters 17-25
				continue;
			}
			#src/verb/core/Vec.hx:262: characters 13-38
			$diff = ($a->arr[$ai] ?? null) - ($b->arr[$bi] ?? null);
			#src/verb/core/Vec.hx:264: lines 264-269
			if (\abs($diff) < Constants::$EPSILON) {
				#src/verb/core/Vec.hx:265: characters 30-35
				$a2 = ($a->arr[$ai] ?? null);
				#src/verb/core/Vec.hx:265: characters 17-37
				$merged->arr[$merged->length++] = $a2;
				#src/verb/core/Vec.hx:266: characters 17-21
				++$ai;
				#src/verb/core/Vec.hx:267: characters 17-21
				++$bi;
				#src/verb/core/Vec.hx:268: characters 17-25
				continue;
			}
			#src/verb/core/Vec.hx:271: lines 271-276
			if ($diff > 0.0) {
				#src/verb/core/Vec.hx:273: characters 30-35
				$b2 = ($b->arr[$bi] ?? null);
				#src/verb/core/Vec.hx:273: characters 17-37
				$merged->arr[$merged->length++] = $b2;
				#src/verb/core/Vec.hx:274: characters 17-21
				++$bi;
				#src/verb/core/Vec.hx:275: characters 17-25
				continue;
			}
			#src/verb/core/Vec.hx:279: characters 26-31
			$a3 = ($a->arr[$ai] ?? null);
			#src/verb/core/Vec.hx:279: characters 13-33
			$merged->arr[$merged->length++] = $a3;
			#src/verb/core/Vec.hx:280: characters 13-17
			++$ai;
		}
		#src/verb/core/Vec.hx:284: characters 9-22
		return $merged;
	}

	/**
	 * @param float $min
	 * @param float $max
	 * @param float $step
	 * 
	 * @return \Array_hx
	 */
	public static function span ($min, $max, $step) {
		#src/verb/core/Vec.hx:77: characters 13-40
		if ($step === null) {
			#src/verb/core/Vec.hx:77: characters 31-40
			return new \Array_hx();
		}
		#src/verb/core/Vec.hx:79: characters 9-48
		if ($step < Constants::$EPSILON) {
			#src/verb/core/Vec.hx:79: characters 39-48
			return new \Array_hx();
		}
		#src/verb/core/Vec.hx:80: characters 9-47
		if (($min > $max) && ($step > 0.0)) {
			#src/verb/core/Vec.hx:80: characters 38-47
			return new \Array_hx();
		}
		#src/verb/core/Vec.hx:81: characters 9-47
		if (($max > $min) && ($step < 0.0)) {
			#src/verb/core/Vec.hx:81: characters 38-47
			return new \Array_hx();
		}
		#src/verb/core/Vec.hx:83: characters 9-20
		$l = new \Array_hx();
		#src/verb/core/Vec.hx:84: characters 9-23
		$cur = $min;
		#src/verb/core/Vec.hx:86: lines 86-89
		while ($cur <= $max) {
			#src/verb/core/Vec.hx:87: characters 13-24
			$l->arr[$l->length++] = $cur;
			#src/verb/core/Vec.hx:88: characters 13-24
			$cur += $step;
		}
		#src/verb/core/Vec.hx:91: characters 9-17
		return $l;
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return \Array_hx
	 */
	public static function sub ($a, $b) {
		#src/verb/core/Vec.hx:232: characters 16-55
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:232: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:232: characters 32-40
		$_g2 = $a->length;
		#src/verb/core/Vec.hx:232: characters 18-53
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:232: characters 28-40
			$i = $_g1++;
			#src/verb/core/Vec.hx:232: characters 42-53
			$tmp = ($a->arr[$i] ?? null) - ($b->arr[$i] ?? null);
			$_g->arr[$_g->length++] = $tmp;
		}
		#src/verb/core/Vec.hx:232: characters 16-55
		return $_g;
	}

	/**
	 * @param \Array_hx $a
	 * @param float $s
	 * @param \Array_hx $b
	 * 
	 * @return void
	 */
	public static function subMulMutate ($a, $s, $b) {
		#src/verb/core/Vec.hx:163: characters 19-23
		$_g = 0;
		#src/verb/core/Vec.hx:163: characters 23-31
		$_g1 = $a->length;
		#src/verb/core/Vec.hx:163: lines 163-164
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:163: characters 19-31
			$i = $_g++;
			#src/verb/core/Vec.hx:164: characters 13-35
			$a[$i] -= $s * ($b->arr[$i] ?? null);
		}
	}

	/**
	 * @param \Array_hx $a
	 * @param \Array_hx $b
	 * 
	 * @return void
	 */
	public static function subMutate ($a, $b) {
		#src/verb/core/Vec.hx:173: characters 19-23
		$_g = 0;
		#src/verb/core/Vec.hx:173: characters 23-31
		$_g1 = $a->length;
		#src/verb/core/Vec.hx:173: lines 173-174
		while ($_g < $_g1) {
			#src/verb/core/Vec.hx:173: characters 19-31
			$i = $_g++;
			#src/verb/core/Vec.hx:174: characters 13-31
			$a[$i] -= ($b->arr[$i] ?? null);
		}
	}

	/**
	 * @param \Array_hx $a
	 * 
	 * @return float
	 */
	public static function sum ($a) {
		#src/verb/core/Vec.hx:139: characters 9-57
		return \Lambda::fold($a, function ($x, $a) {
			#src/verb/core/Vec.hx:139: characters 38-50
			return $a + $x;
		}, 0);
	}

	/**
	 * @param int $rows
	 * 
	 * @return \Array_hx
	 */
	public static function zeros1d ($rows) {
		#src/verb/core/Vec.hx:200: characters 16-43
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:200: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:200: characters 32-36
		$_g2 = $rows;
		#src/verb/core/Vec.hx:200: characters 18-41
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:200: characters 28-36
			$i = $_g1++;
			#src/verb/core/Vec.hx:200: characters 38-41
			$_g->arr[$_g->length++] = 0.0;
		}
		#src/verb/core/Vec.hx:200: characters 16-43
		return $_g;
	}

	/**
	 * @param int $rows
	 * @param int $cols
	 * 
	 * @return \Array_hx
	 */
	public static function zeros2d ($rows, $cols) {
		#src/verb/core/Vec.hx:204: characters 16-53
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:204: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:204: characters 32-36
		$_g2 = $rows;
		#src/verb/core/Vec.hx:204: characters 18-51
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:204: characters 28-36
			$i = $_g1++;
			#src/verb/core/Vec.hx:204: characters 38-51
			$x = Vec::zeros1d($cols);
			$_g->arr[$_g->length++] = $x;
		}
		#src/verb/core/Vec.hx:204: characters 16-53
		return $_g;
	}

	/**
	 * @param int $rows
	 * @param int $cols
	 * @param int $depth
	 * 
	 * @return \Array_hx
	 */
	public static function zeros3d ($rows, $cols, $depth) {
		#src/verb/core/Vec.hx:208: characters 16-60
		$_g = new \Array_hx();
		#src/verb/core/Vec.hx:208: characters 28-32
		$_g1 = 0;
		#src/verb/core/Vec.hx:208: characters 32-36
		$_g2 = $rows;
		#src/verb/core/Vec.hx:208: characters 18-58
		while ($_g1 < $_g2) {
			#src/verb/core/Vec.hx:208: characters 28-36
			$i = $_g1++;
			#src/verb/core/Vec.hx:208: characters 38-58
			$x = Vec::zeros2d($cols, $depth);
			$_g->arr[$_g->length++] = $x;
		}
		#src/verb/core/Vec.hx:208: characters 16-60
		return $_g;
	}
}

Boot::registerClass(Vec::class, 'verb.core.Vec');
