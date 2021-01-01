<?php
/**
 * Generated by Haxe 4.1.4
 */

namespace verb\eval_hx;

use \php\Boot;

class KnotMultiplicity {
	/**
	 * @var float
	 */
	public $knot;
	/**
	 * @var int
	 */
	public $mult;

	/**
	 * @param float $knot
	 * @param int $mult
	 * 
	 * @return void
	 */
	public function __construct ($knot, $mult) {
		#src/verb/eval/Analyze.hx:684: characters 9-25
		$this->knot = $knot;
		#src/verb/eval/Analyze.hx:685: characters 9-25
		$this->mult = $mult;
	}

	/**
	 * @return void
	 */
	public function inc () {
		#src/verb/eval/Analyze.hx:690: characters 9-15
		$this->mult++;
	}
}

Boot::registerClass(KnotMultiplicity::class, 'verb.eval.KnotMultiplicity');
