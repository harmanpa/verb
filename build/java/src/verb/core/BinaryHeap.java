// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class BinaryHeap<T> extends haxe.lang.HxObject
{
	public BinaryHeap(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public BinaryHeap(haxe.lang.Function scoreFunction)
	{
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		verb.core.BinaryHeap.__hx_ctor_verb_core_BinaryHeap(((verb.core.BinaryHeap<T>) (this) ), ((haxe.lang.Function) (scoreFunction) ));
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		java.lang.Object __temp_expr1 = ((java.lang.Object) (null) );
	}
	
	
	protected static <T_c> void __hx_ctor_verb_core_BinaryHeap(verb.core.BinaryHeap<T_c> __hx_this, haxe.lang.Function scoreFunction)
	{
		//line 161 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		__hx_this.content = new haxe.root.Array<verb.core.HeapElement<T_c>>(( (verb.core.HeapElement<T_c>[]) (new verb.core.HeapElement[] {}) ));
		//line 162 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		__hx_this.scoreFunction = scoreFunction;
	}
	
	
	public haxe.root.Array<verb.core.HeapElement<T>> content;
	
	public haxe.lang.Function scoreFunction;
	
	public void push(verb.core.HeapElement<T> element)
	{
		//line 167 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this.content.push(element);
		//line 169 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this.bubbleUp(( this.content.length - 1 ));
	}
	
	
	public verb.core.HeapElement<T> pop()
	{
		//line 174 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		verb.core.HeapElement<T> result = this.content.__get(0);
		//line 176 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		verb.core.HeapElement<T> end = ((verb.core.HeapElement<T>) (this.content.pop()) );
		//line 179 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		if (( this.content.length > 0 )) 
		{
			//line 180 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			this.content.__set(0, end);
			//line 181 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			this.sinkDown(0);
		}
		
		//line 183 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		return result;
	}
	
	
	public verb.core.HeapElement<T> peek()
	{
		//line 187 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		return this.content.__get(0);
	}
	
	
	public void remove(verb.core.HeapElement<T> node)
	{
		//line 191 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		int len = this.content.length;
		//line 194 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		{
			//line 194 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			int _g = 0;
			//line 194 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			int _g1 = len;
			//line 194 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			while (( _g < _g1 ))
			{
				//line 194 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				int i = _g++;
				//line 195 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( this.content.__get(i) == node )) 
				{
					//line 198 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					verb.core.HeapElement<T> end = ((verb.core.HeapElement<T>) (this.content.pop()) );
					//line 199 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					if (( i != ( len - 1 ) )) 
					{
						//line 200 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						this.content.__set(i, end);
						//line 201 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (( ((double) (this.scoreFunction.__hx_invoke1_f(0.0, end)) ) < ((double) (this.scoreFunction.__hx_invoke1_f(0.0, node)) ) )) 
						{
							//line 202 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.bubbleUp(i);
						}
						else
						{
							//line 204 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.sinkDown(i);
						}
						
					}
					
					//line 206 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					return ;
				}
				
			}
			
		}
		
		//line 209 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		throw ((java.lang.RuntimeException) (haxe.Exception.thrown("Node not found.")) );
	}
	
	
	public int size()
	{
		//line 213 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		return this.content.length;
	}
	
	
	public void bubbleUp(int n)
	{
		//line 218 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		verb.core.HeapElement<T> element = this.content.__get(n);
		//line 220 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		while (( n > 0 ))
		{
			//line 222 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			int parentN = ( ((int) (java.lang.Math.floor(( (( n + 1.0 )) / 2 ))) ) - 1 );
			//line 222 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			verb.core.HeapElement<T> parent = this.content.__get(parentN);
			//line 225 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( ((double) (this.scoreFunction.__hx_invoke1_f(0.0, element)) ) < ((double) (this.scoreFunction.__hx_invoke1_f(0.0, parent)) ) )) 
			{
				//line 226 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				this.content.__set(parentN, element);
				//line 227 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				this.content.__set(n, parent);
				//line 229 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				n = parentN;
			}
			else
			{
				//line 233 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				break;
			}
			
		}
		
	}
	
	
	public void sinkDown(int n)
	{
		//line 240 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		int length = this.content.length;
		//line 240 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		verb.core.HeapElement<T> element = this.content.__get(n);
		//line 240 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		double elemScore = ((double) (this.scoreFunction.__hx_invoke1_f(0.0, element)) );
		//line 244 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		while (true)
		{
			//line 246 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			int child2N = ( (( n + 1 )) * 2 );
			//line 247 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			int child1N = ( child2N - 1 );
			//line 250 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			int swap = -1;
			//line 251 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			double child1Score = 0.0;
			//line 254 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( child1N < length )) 
			{
				//line 256 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				verb.core.HeapElement<T> child1 = this.content.__get(child1N);
				//line 257 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				child1Score = ((double) (this.scoreFunction.__hx_invoke1_f(0.0, child1)) );
				//line 259 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( child1Score < elemScore )) 
				{
					//line 260 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					swap = child1N;
				}
				
			}
			
			//line 263 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( child2N < length )) 
			{
				//line 264 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				verb.core.HeapElement<T> child2 = this.content.__get(child2N);
				//line 265 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				double child2Score = ((double) (this.scoreFunction.__hx_invoke1_f(0.0, child2)) );
				//line 266 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( child2Score < (( (( swap == -1 )) ? (elemScore) : (child1Score) )) )) 
				{
					//line 267 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					swap = child2N;
				}
				
			}
			
			//line 272 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( swap != -1 )) 
			{
				//line 273 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				this.content.__set(n, this.content.__get(swap));
				//line 274 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				this.content.__set(swap, element);
				//line 275 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				n = swap;
			}
			else
			{
				//line 279 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				break;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		{
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			boolean __temp_executeDef1 = true;
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( field != null )) 
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				switch (field.hashCode())
				{
					case 1268147338:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("scoreFunction")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.scoreFunction = ((haxe.lang.Function) (value) );
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return value;
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 951530617:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("content")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.content = ((haxe.root.Array<verb.core.HeapElement<T>>) (value) );
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return value;
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (__temp_executeDef1) 
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		{
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			boolean __temp_executeDef1 = true;
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( field != null )) 
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				switch (field.hashCode())
				{
					case 508491221:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("sinkDown")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "sinkDown")) );
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 951530617:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("content")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return this.content;
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case -1640051641:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("bubbleUp")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "bubbleUp")) );
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 1268147338:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("scoreFunction")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return this.scoreFunction;
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 3530753:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("size")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "size")) );
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 3452698:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("push")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "push")) );
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case -934610812:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("remove")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "remove")) );
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 111185:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("pop")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "pop")) );
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 3436891:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("peek")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "peek")) );
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (__temp_executeDef1) 
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		{
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			boolean __temp_executeDef1 = true;
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( field != null )) 
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				switch (field.hashCode())
				{
					case 508491221:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("sinkDown")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.sinkDown(((int) (haxe.lang.Runtime.toInt(dynargs[0])) ));
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 3452698:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("push")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.push(((verb.core.HeapElement<T>) (dynargs[0]) ));
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case -1640051641:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("bubbleUp")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.bubbleUp(((int) (haxe.lang.Runtime.toInt(dynargs[0])) ));
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 111185:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("pop")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return this.pop();
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 3530753:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("size")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return this.size();
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case 3436891:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("peek")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							return this.peek();
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
					case -934610812:
					{
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						if (field.equals("remove")) 
						{
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							__temp_executeDef1 = false;
							//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
							this.remove(((verb.core.HeapElement<T>) (dynargs[0]) ));
						}
						
						//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (__temp_executeDef1) 
			{
				//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		baseArr.push("scoreFunction");
		//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		baseArr.push("content");
		//line 155 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


