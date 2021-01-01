<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\geom;

use \php\Boot;
use \verb\eval_hx\Make;

class SphericalSurface extends NurbsSurface {
	/**
	 * @var \Array_hx
	 */
	public $_center;
	/**
	 * @var float
	 */
	public $_radius;

	/**
	 * @param \Array_hx $center
	 * @param float $radius
	 * 
	 * @return void
	 */
	public function __construct ($center, $radius) {
		#src/verb/geom/SphericalSurface.hx:22: characters 9-74
		parent::__construct(Make::sphericalSurface($center, \Array_hx::wrap([
			0,
			0,
			1,
		]), \Array_hx::wrap([
			1,
			0,
			0,
		]), $radius));
		#src/verb/geom/SphericalSurface.hx:24: characters 9-25
		$this->_center = $center;
		#src/verb/geom/SphericalSurface.hx:25: characters 9-25
		$this->_radius = $radius;
	}

	/**
	 * @return \Array_hx
	 */
	public function center () {
		#src/verb/geom/SphericalSurface.hx:33: characters 39-53
		return $this->_center;
	}

	/**
	 * @return float
	 */
	public function radius () {
		#src/verb/geom/SphericalSurface.hx:37: characters 39-53
		return $this->_radius;
	}
}

Boot::registerClass(SphericalSurface::class, 'verb.geom.SphericalSurface');
