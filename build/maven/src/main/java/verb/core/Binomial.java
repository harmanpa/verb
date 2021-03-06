// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Binomial extends haxe.lang.HxObject
{
	static
	{
		//line 7 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		verb.core.Binomial.memo = new haxe.ds.IntMap<haxe.ds.IntMap<java.lang.Object>>();
	}
	
	public Binomial(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Binomial()
	{
		//line 5 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		verb.core.Binomial.__hx_ctor_verb_core_Binomial(this);
	}
	
	
	protected static void __hx_ctor_verb_core_Binomial(verb.core.Binomial __hx_this)
	{
	}
	
	
	public static haxe.ds.IntMap<haxe.ds.IntMap<java.lang.Object>> memo;
	
	public static double get(int n, int k)
	{
		//line 10 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (( k == 0.0 )) 
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			return 1.0;
		}
		
		//line 14 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (( ( n == 0 ) || ( k > n ) )) 
		{
			//line 15 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			return 0.0;
		}
		
		//line 18 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (( k > ( n - k ) )) 
		{
			//line 19 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			k = ( n - k );
		}
		
		//line 22 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (verb.core.Binomial.memo_exists(n, k)) 
		{
			//line 23 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			return verb.core.Binomial.get_memo(n, k);
		}
		
		//line 26 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		double r = ((double) (1) );
		//line 26 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		int n_o = n;
		//line 29 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		{
			//line 29 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			int _g = 1;
			//line 29 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			int _g1 = ( k + 1 );
			//line 29 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			while (( _g < _g1 ))
			{
				//line 29 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				int d = _g++;
				//line 31 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				if (verb.core.Binomial.memo_exists(n_o, d)) 
				{
					//line 32 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
					 -- n;
					//line 33 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
					r = verb.core.Binomial.get_memo(n_o, d);
					//line 34 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
					continue;
				}
				
				//line 37 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				r *= ((double) (n--) );
				//line 38 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				r /= ((double) (d) );
				//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				verb.core.Binomial.memoize(n_o, d, r);
			}
			
		}
		
		//line 44 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		return r;
	}
	
	
	public static double get_no_memo(int n, int k)
	{
		//line 48 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (( k == 0 )) 
		{
			//line 49 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			return ((double) (1) );
		}
		
		//line 52 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (( ( n == 0 ) || ( k > n ) )) 
		{
			//line 53 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			return ((double) (0) );
		}
		
		//line 56 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (( k > ( n - k ) )) 
		{
			//line 57 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			k = ( n - k );
		}
		
		//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		double r = ((double) (1) );
		//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		int n_o = n;
		//line 63 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		{
			//line 63 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			int _g = 1;
			//line 63 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			int _g1 = ( k + 1 );
			//line 63 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			while (( _g < _g1 ))
			{
				//line 63 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				int d = _g++;
				//line 64 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				r *= ((double) (n--) );
				//line 65 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
				r /= ((double) (d) );
			}
			
		}
		
		//line 68 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		return r;
	}
	
	
	public static boolean memo_exists(int n, int k)
	{
		//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if (verb.core.Binomial.memo.exists(n)) 
		{
			//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			return ((haxe.ds.IntMap<java.lang.Object>) (verb.core.Binomial.memo.get(n)) ).exists(k);
		}
		else
		{
			//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			return false;
		}
		
	}
	
	
	public static double get_memo(int n, int k)
	{
		//line 76 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		return ((double) (haxe.lang.Runtime.toDouble(((haxe.ds.IntMap<java.lang.Object>) (verb.core.Binomial.memo.get(n)) ).get(k))) );
	}
	
	
	public static void memoize(int n, int k, double val)
	{
		//line 80 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		if ( ! (verb.core.Binomial.memo.exists(n)) ) 
		{
			//line 81 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
			verb.core.Binomial.memo.set(n, new haxe.ds.IntMap<java.lang.Object>());
		}
		
		//line 84 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Binomial.hx"
		((haxe.ds.IntMap<java.lang.Object>) (verb.core.Binomial.memo.get(n)) ).set(k, val);
	}
	
	
}


