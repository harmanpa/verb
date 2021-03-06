<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class Constants {
	/**
	 * @var float
	 */
	static public $EPSILON = 1e-10;
	/**
	 * @var float
	 */
	static public $TOLERANCE = 1e-6;
	/**
	 * @var string
	 */
	static public $VERSION = "2.0.0";

}

Boot::registerClass(Constants::class, 'verb.core.Constants');
