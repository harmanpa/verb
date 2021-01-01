<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;
use \verb\eval_hx\IBoundingBoxTree;

class LazyPolylineBoundingBoxTree implements IBoundingBoxTree {
	/**
	 * @var BoundingBox
	 */
	public $_boundingBox;
	/**
	 * @var Interval
	 */
	public $_interval;
	/**
	 * @var PolylineData
	 */
	public $_polyline;

	/**
	 * @param PolylineData $polyline
	 * @param Interval $interval
	 * 
	 * @return void
	 */
	public function __construct ($polyline, $interval = null) {
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:10: characters 38-42
		$this->_boundingBox = null;
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:13: characters 9-29
		$this->_polyline = $polyline;
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:15: lines 15-17
		if ($interval === null) {
			#src/verb/core/LazyPolylineBoundingBoxTree.hx:16: characters 13-104
			$interval = new Interval(0, ($polyline->points->length !== 0 ? $polyline->points->length - 1 : 0));
		}
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:18: characters 9-29
		$this->_interval = $interval;
	}

	/**
	 * @return BoundingBox
	 */
	public function boundingBox () {
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:37: lines 37-39
		if ($this->_boundingBox === null) {
			#src/verb/core/LazyPolylineBoundingBoxTree.hx:38: characters 13-63
			$this->_boundingBox = new BoundingBox($this->_polyline->points);
		}
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:41: characters 9-28
		return $this->_boundingBox;
	}

	/**
	 * @return bool
	 */
	public function empty () {
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:53: characters 9-50
		return ($this->_interval->max - $this->_interval->min) === 0;
	}

	/**
	 * @param float $tolerance
	 * 
	 * @return bool
	 */
	public function indivisible ($tolerance) {
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:49: characters 9-50
		return ($this->_interval->max - $this->_interval->min) === 1;
	}

	/**
	 * @return Pair
	 */
	public function split () {
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:22: characters 9-33
		$min = $this->_interval->min;
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:23: characters 9-33
		$max = $this->_interval->max;
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:25: characters 9-54
		$pivot = $min + (int)(\ceil(($max - $min) / 2));
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:27: lines 27-28
		$l = new Interval($min, $pivot);
		$r = new Interval($pivot, $max);
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:31: characters 13-60
		$tmp = new LazyPolylineBoundingBoxTree($this->_polyline, $l);
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:30: lines 30-32
		return new Pair($tmp, new LazyPolylineBoundingBoxTree($this->_polyline, $r));
	}

	/**
	 * @return int
	 */
	public function yield () {
		#src/verb/core/LazyPolylineBoundingBoxTree.hx:45: characters 9-29
		return $this->_interval->min;
	}
}

Boot::registerClass(LazyPolylineBoundingBoxTree::class, 'verb.core.LazyPolylineBoundingBoxTree');
