<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class Plane extends SerializableBase {
	/**
	 * @var \Array_hx
	 */
	public $normal;
	/**
	 * @var \Array_hx
	 */
	public $origin;

	/**
	 * @param \Array_hx $origin
	 * @param \Array_hx $normal
	 * 
	 * @return void
	 */
	public function __construct ($origin, $normal) {
		#src/verb/core/Data.hx:36: characters 9-29
		$this->origin = $origin;
		#src/verb/core/Data.hx:37: characters 9-29
		$this->normal = $normal;
	}
}

Boot::registerClass(Plane::class, 'verb.core.Plane');