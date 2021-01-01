<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace haxe\ds;

use \php\Boot;
use \haxe\IMap;
use \php\_NativeIndexedArray\NativeIndexedArrayIterator;

/**
 * ObjectMap allows mapping of object keys to arbitrary values.
 * On static targets, the keys are considered to be strong references. Refer
 * to `haxe.ds.WeakMap` for a weak reference version.
 * See `Map` for documentation details.
 * @see https://haxe.org/manual/std-Map.html
 */
class ObjectMap implements IMap {
	/**
	 * @var mixed
	 */
	public $_keys;
	/**
	 * @var mixed
	 */
	public $_values;

	/**
	 * Creates a new ObjectMap.
	 * 
	 * @return void
	 */
	public function __construct () {
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:33: characters 11-33
		$this1 = [];
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:33: characters 3-33
		$this->_keys = $this1;
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:34: characters 13-35
		$this1 = [];
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:34: characters 3-35
		$this->_values = $this1;
	}

	/**
	 * See `Map.get`
	 * 
	 * @param mixed $key
	 * 
	 * @return mixed
	 */
	public function get ($key) {
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:44: characters 3-40
		$id = \spl_object_hash($key);
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:45: characters 10-56
		if (isset($this->_values[$id])) {
			#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:45: characters 38-49
			return $this->_values[$id];
		} else {
			#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:45: characters 52-56
			return null;
		}
	}

	/**
	 * See `Map.iterator`
	 * (cs, java) Implementation detail: Do not `set()` any new value while
	 * iterating, as it may cause a resize, which will break iteration.
	 * 
	 * @return object
	 */
	public function iterator () {
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:68: characters 10-28
		return new NativeIndexedArrayIterator(\array_values($this->_values));
	}

	/**
	 * See `Map.set`
	 * 
	 * @param mixed $key
	 * @param mixed $value
	 * 
	 * @return void
	 */
	public function set ($key, $value) {
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:38: characters 3-40
		$id = \spl_object_hash($key);
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:39: characters 3-18
		$this->_keys[$id] = $key;
		#C:\Tools\HaxeToolkit\haxe\std/php/_std/haxe/ds/ObjectMap.hx:40: characters 3-22
		$this->_values[$id] = $value;
	}
}

Boot::registerClass(ObjectMap::class, 'haxe.ds.ObjectMap');
