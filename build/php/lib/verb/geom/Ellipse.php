<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\geom;

use \php\Boot;

class Ellipse extends EllipseArc {
	/**
	 * @param \Array_hx $center
	 * @param \Array_hx $xaxis
	 * @param \Array_hx $yaxis
	 * 
	 * @return void
	 */
	public function __construct ($center, $xaxis, $yaxis) {
		#src/verb/geom/Ellipse.hx:23: characters 9-54
		parent::__construct($center, $xaxis, $yaxis, 0, \Math::$PI * 2);
	}
}

Boot::registerClass(Ellipse::class, 'verb.geom.Ellipse');
