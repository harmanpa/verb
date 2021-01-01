<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\core;

use \php\Boot;
use \verb\eval_hx\IBoundingBoxTree;

class MeshBoundingBoxTree implements IBoundingBoxTree {
	/**
	 * @var BoundingBox
	 */
	public $_boundingBox;
	/**
	 * @var Pair
	 */
	public $_children;
	/**
	 * @var bool
	 */
	public $_empty;
	/**
	 * @var int
	 */
	public $_face;

	/**
	 * @param MeshData $mesh
	 * @param \Array_hx $faceIndices
	 * 
	 * @return void
	 */
	public function __construct ($mesh, $faceIndices = null) {
		#src/verb/core/MeshBoundingBoxTree.hx:13: characters 25-30
		$this->_empty = false;
		#src/verb/core/MeshBoundingBoxTree.hx:12: characters 23-25
		$this->_face = -1;
		#src/verb/core/MeshBoundingBoxTree.hx:17: lines 17-19
		if ($faceIndices === null) {
			#src/verb/core/MeshBoundingBoxTree.hx:18: characters 27-65
			$_g = new \Array_hx();
			#src/verb/core/MeshBoundingBoxTree.hx:18: characters 39-43
			$_g1 = 0;
			#src/verb/core/MeshBoundingBoxTree.hx:18: characters 43-60
			$_g2 = $mesh->faces->length;
			#src/verb/core/MeshBoundingBoxTree.hx:18: characters 29-63
			while ($_g1 < $_g2) {
				#src/verb/core/MeshBoundingBoxTree.hx:18: characters 39-60
				$i = $_g1++;
				#src/verb/core/MeshBoundingBoxTree.hx:18: characters 62-63
				$_g->arr[$_g->length++] = $i;
			}
			#src/verb/core/MeshBoundingBoxTree.hx:18: characters 27-65
			$faceIndices = $_g;
		}
		#src/verb/core/MeshBoundingBoxTree.hx:21: characters 9-62
		$this->_boundingBox = Mesh::makeMeshAabb($mesh, $faceIndices);
		#src/verb/core/MeshBoundingBoxTree.hx:23: lines 23-29
		if ($faceIndices->length < 1) {
			#src/verb/core/MeshBoundingBoxTree.hx:24: characters 13-26
			$this->_empty = true;
			#src/verb/core/MeshBoundingBoxTree.hx:25: characters 13-19
			return;
		} else if ($faceIndices->length < 2) {
			#src/verb/core/MeshBoundingBoxTree.hx:27: characters 13-35
			$this->_face = ($faceIndices->arr[0] ?? null);
			#src/verb/core/MeshBoundingBoxTree.hx:28: characters 13-19
			return;
		}
		#src/verb/core/MeshBoundingBoxTree.hx:31: characters 9-85
		$as = Mesh::sortTrianglesOnLongestAxis($this->_boundingBox, $mesh, $faceIndices);
		#src/verb/core/MeshBoundingBoxTree.hx:32: characters 9-27
		$l = ArrayExtensions::left($as);
		#src/verb/core/MeshBoundingBoxTree.hx:33: characters 9-28
		$r = ArrayExtensions::right($as);
		#src/verb/core/MeshBoundingBoxTree.hx:36: characters 13-45
		$tmp = new MeshBoundingBoxTree($mesh, $l);
		#src/verb/core/MeshBoundingBoxTree.hx:35: lines 35-38
		$this->_children = new Pair($tmp, new MeshBoundingBoxTree($mesh, $r));
	}

	/**
	 * @return BoundingBox
	 */
	public function boundingBox () {
		#src/verb/core/MeshBoundingBoxTree.hx:46: characters 9-28
		return $this->_boundingBox;
	}

	/**
	 * @return bool
	 */
	public function empty () {
		#src/verb/core/MeshBoundingBoxTree.hx:58: characters 9-22
		return $this->_empty;
	}

	/**
	 * @param float $tolerance
	 * 
	 * @return bool
	 */
	public function indivisible ($tolerance) {
		#src/verb/core/MeshBoundingBoxTree.hx:54: characters 9-33
		return $this->_children === null;
	}

	/**
	 * @return Pair
	 */
	public function split () {
		#src/verb/core/MeshBoundingBoxTree.hx:42: characters 9-25
		return $this->_children;
	}

	/**
	 * @return int
	 */
	public function yield () {
		#src/verb/core/MeshBoundingBoxTree.hx:50: characters 9-21
		return $this->_face;
	}
}

Boot::registerClass(MeshBoundingBoxTree::class, 'verb.core.MeshBoundingBoxTree');