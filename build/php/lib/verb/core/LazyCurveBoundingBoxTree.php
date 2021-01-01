<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;
use \verb\eval_hx\Divide;
use \verb\eval_hx\Eval_hx;
use \verb\eval_hx\IBoundingBoxTree;

class LazyCurveBoundingBoxTree implements IBoundingBoxTree {
	/**
	 * @var BoundingBox
	 */
	public $_boundingBox;
	/**
	 * @var NurbsCurveData
	 */
	public $_curve;
	/**
	 * @var float
	 */
	public $_knotTol;

	/**
	 * @param NurbsCurveData $curve
	 * @param float $knotTol
	 * 
	 * @return void
	 */
	public function __construct ($curve, $knotTol = null) {
		#src/verb/core/LazyCurveBoundingBoxTree.hx:14: characters 38-42
		$this->_boundingBox = null;
		#src/verb/core/LazyCurveBoundingBoxTree.hx:18: characters 9-23
		$this->_curve = $curve;
		#src/verb/core/LazyCurveBoundingBoxTree.hx:19: lines 19-21
		if ($knotTol === null) {
			#src/verb/core/LazyCurveBoundingBoxTree.hx:20: characters 23-44
			$a = $this->_curve->knots;
			#src/verb/core/LazyCurveBoundingBoxTree.hx:20: characters 13-49
			$knotTol = (ArrayExtensions::last($a) - ArrayExtensions::first($a)) / 64;
		}
		#src/verb/core/LazyCurveBoundingBoxTree.hx:22: characters 9-27
		$this->_knotTol = $knotTol;
	}

	/**
	 * @return BoundingBox
	 */
	public function boundingBox () {
		#src/verb/core/LazyCurveBoundingBoxTree.hx:38: lines 38-40
		if ($this->_boundingBox === null) {
			#src/verb/core/LazyCurveBoundingBoxTree.hx:39: characters 13-88
			$this->_boundingBox = new BoundingBox(Eval_hx::dehomogenize1d($this->_curve->controlPoints));
		}
		#src/verb/core/LazyCurveBoundingBoxTree.hx:41: characters 9-28
		return $this->_boundingBox;
	}

	/**
	 * @return bool
	 */
	public function empty () {
		#src/verb/core/LazyCurveBoundingBoxTree.hx:53: characters 9-21
		return false;
	}

	/**
	 * @param float $tolerance
	 * 
	 * @return bool
	 */
	public function indivisible ($tolerance) {
		#src/verb/core/LazyCurveBoundingBoxTree.hx:49: characters 16-37
		$a = $this->_curve->knots;
		#src/verb/core/LazyCurveBoundingBoxTree.hx:49: characters 9-48
		return (ArrayExtensions::last($a) - ArrayExtensions::first($a)) < $this->_knotTol;
	}

	/**
	 * @return Pair
	 */
	public function split () {
		#src/verb/core/LazyCurveBoundingBoxTree.hx:26: characters 9-40
		$min = ArrayExtensions::first($this->_curve->knots);
		#src/verb/core/LazyCurveBoundingBoxTree.hx:27: characters 9-39
		$max = ArrayExtensions::last($this->_curve->knots);
		#src/verb/core/LazyCurveBoundingBoxTree.hx:28: characters 9-29
		$dom = $max - $min;
		#src/verb/core/LazyCurveBoundingBoxTree.hx:30: characters 9-94
		$crvs = Divide::curveSplit($this->_curve, ($max + $min) / 2.0 + $dom * 0.1 * (\mt_rand() / \mt_getrandmax()));
		#src/verb/core/LazyCurveBoundingBoxTree.hx:33: characters 13-62
		$tmp = new LazyCurveBoundingBoxTree(($crvs->arr[0] ?? null), $this->_knotTol);
		#src/verb/core/LazyCurveBoundingBoxTree.hx:32: lines 32-34
		return new Pair($tmp, new LazyCurveBoundingBoxTree(($crvs->arr[1] ?? null), $this->_knotTol));
	}

	/**
	 * @return NurbsCurveData
	 */
	public function yield () {
		#src/verb/core/LazyCurveBoundingBoxTree.hx:45: characters 9-22
		return $this->_curve;
	}
}

Boot::registerClass(LazyCurveBoundingBoxTree::class, 'verb.core.LazyCurveBoundingBoxTree');