<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\eval_hx;

use \verb\core\BoundingBox;
use \verb\core\Pair;
use \php\Boot;

interface IBoundingBoxTree {
	/**
	 * @return BoundingBox
	 */
	public function boundingBox () ;

	/**
	 * @return bool
	 */
	public function empty () ;

	/**
	 * @param float $tolerance
	 * 
	 * @return bool
	 */
	public function indivisible ($tolerance) ;

	/**
	 * @return Pair
	 */
	public function split () ;

	/**
	 * @return mixed
	 */
	public function yield () ;
}

Boot::registerClass(IBoundingBoxTree::class, 'verb.eval.IBoundingBoxTree');
