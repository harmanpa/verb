<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\eval_hx;

use \php\Boot;

class AdaptiveRefinementOptions {
	/**
	 * @var int
	 */
	public $maxDepth;
	/**
	 * @var int
	 */
	public $minDepth;
	/**
	 * @var int
	 */
	public $minDivsU;
	/**
	 * @var int
	 */
	public $minDivsV;
	/**
	 * @var float
	 */
	public $normTol;
	/**
	 * @var bool
	 */
	public $refine;

	/**
	 * @return void
	 */
	public function __construct () {
		#src/verb/eval/Tess.hx:365: characters 33-34
		$this->minDivsV = 1;
		#src/verb/eval/Tess.hx:364: characters 33-34
		$this->minDivsU = 1;
		#src/verb/eval/Tess.hx:363: characters 32-36
		$this->refine = true;
		#src/verb/eval/Tess.hx:362: characters 33-35
		$this->maxDepth = 10;
		#src/verb/eval/Tess.hx:361: characters 33-34
		$this->minDepth = 0;
		#src/verb/eval/Tess.hx:360: characters 34-40
		$this->normTol = 2.5e-2;
	}
}

Boot::registerClass(AdaptiveRefinementOptions::class, 'verb.eval.AdaptiveRefinementOptions');