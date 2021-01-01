<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class Interval {
	/**
	 * @var mixed
	 */
	public $max;
	/**
	 * @var mixed
	 */
	public $min;

	/**
	 * @param mixed $min
	 * @param mixed $max
	 * 
	 * @return void
	 */
	public function __construct ($min, $max) {
		#src/verb/core/Data.hx:220: characters 9-23
		$this->min = $min;
		#src/verb/core/Data.hx:221: characters 9-23
		$this->max = $max;
	}
}

Boot::registerClass(Interval::class, 'verb.core.Interval');
