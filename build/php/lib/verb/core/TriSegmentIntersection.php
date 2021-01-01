<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class TriSegmentIntersection {
	/**
	 * @var float
	 */
	public $p;
	/**
	 * @var \Array_hx
	 */
	public $point;
	/**
	 * @var float
	 */
	public $s;
	/**
	 * @var float
	 */
	public $t;

	/**
	 * @param \Array_hx $point
	 * @param float $s
	 * @param float $t
	 * @param float $r
	 * 
	 * @return void
	 */
	public function __construct ($point, $s, $t, $r) {
		#src/verb/core/Intersections.hx:118: characters 9-27
		$this->point = $point;
		#src/verb/core/Intersections.hx:119: characters 9-19
		$this->s = $s;
		#src/verb/core/Intersections.hx:120: characters 9-19
		$this->t = $t;
		#src/verb/core/Intersections.hx:121: characters 9-19
		$this->p = $r;
	}
}

Boot::registerClass(TriSegmentIntersection::class, 'verb.core.TriSegmentIntersection');
