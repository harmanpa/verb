<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class CurveTriPoint {
	/**
	 * @var \Array_hx
	 */
	public $point;
	/**
	 * @var float
	 */
	public $u;
	/**
	 * @var \Array_hx
	 */
	public $uv;

	/**
	 * @param float $u
	 * @param \Array_hx $point
	 * @param \Array_hx $uv
	 * 
	 * @return void
	 */
	public function __construct ($u, $point, $uv) {
		#src/verb/core/Intersections.hx:132: characters 9-19
		$this->u = $u;
		#src/verb/core/Intersections.hx:133: characters 9-27
		$this->point = $point;
		#src/verb/core/Intersections.hx:134: characters 9-21
		$this->uv = $uv;
	}
}

Boot::registerClass(CurveTriPoint::class, 'verb.core.CurveTriPoint');
