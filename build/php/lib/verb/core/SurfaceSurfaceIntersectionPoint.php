<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class SurfaceSurfaceIntersectionPoint {
	/**
	 * @var float
	 */
	public $dist;
	/**
	 * @var \Array_hx
	 */
	public $point;
	/**
	 * @var \Array_hx
	 */
	public $uv0;
	/**
	 * @var \Array_hx
	 */
	public $uv1;

	/**
	 * @param \Array_hx $uv0
	 * @param \Array_hx $uv1
	 * @param \Array_hx $point
	 * @param float $dist
	 * 
	 * @return void
	 */
	public function __construct ($uv0, $uv1, $point, $dist) {
		#src/verb/core/Intersections.hx:95: characters 9-23
		$this->uv0 = $uv0;
		#src/verb/core/Intersections.hx:96: characters 9-23
		$this->uv1 = $uv1;
		#src/verb/core/Intersections.hx:97: characters 9-27
		$this->point = $point;
		#src/verb/core/Intersections.hx:98: characters 9-25
		$this->dist = $dist;
	}
}

Boot::registerClass(SurfaceSurfaceIntersectionPoint::class, 'verb.core.SurfaceSurfaceIntersectionPoint');
