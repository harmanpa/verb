<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;

class MeshData extends SerializableBase {
	/**
	 * @var \Array_hx
	 */
	public $faces;
	/**
	 * @var \Array_hx
	 */
	public $normals;
	/**
	 * @var \Array_hx
	 */
	public $points;
	/**
	 * @var \Array_hx
	 */
	public $uvs;

	/**
	 * @return MeshData
	 */
	public static function empty () {
		#src/verb/core/Data.hx:138: characters 9-41
		return new MeshData(new \Array_hx(), new \Array_hx(), new \Array_hx(), new \Array_hx());
	}

	/**
	 * @param \Array_hx $faces
	 * @param \Array_hx $points
	 * @param \Array_hx $normals
	 * @param \Array_hx $uvs
	 * 
	 * @return void
	 */
	public function __construct ($faces, $points, $normals, $uvs) {
		#src/verb/core/Data.hx:131: characters 9-27
		$this->faces = $faces;
		#src/verb/core/Data.hx:132: characters 9-29
		$this->points = $points;
		#src/verb/core/Data.hx:133: characters 9-31
		$this->normals = $normals;
		#src/verb/core/Data.hx:134: characters 9-23
		$this->uvs = $uvs;
	}
}

Boot::registerClass(MeshData::class, 'verb.core.MeshData');