// Generated by Haxe 4.1.4
package verb.eval;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public interface IBoundingBoxTree<T> extends haxe.lang.IHxObject
{
	verb.core.BoundingBox boundingBox();
	
	verb.core.Pair<verb.eval.IBoundingBoxTree<T>, verb.eval.IBoundingBoxTree<T>> split();
	
	T yield();
	
	boolean indivisible(double tolerance);
	
	boolean empty();
	
}

