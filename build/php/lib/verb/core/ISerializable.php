<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

interface ISerializable {
	/**
	 * @return string
	 */
	public function serialize () ;
}

Boot::registerClass(ISerializable::class, 'verb.core.ISerializable');