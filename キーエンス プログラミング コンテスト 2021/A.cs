using System;
using System.Linq;

class A
{
	static long[] Read() => Console.ReadLine().Split().Select(long.Parse).ToArray();
	static void Main()
	{
		Read();
		var a = Read();
		var b = Read();

		long aMax = 0;
		long c = 0;

		for (int i = 0; i < a.Length; i++)
		{
			aMax = Math.Max(aMax, a[i]);
			c = Math.Max(c, aMax * b[i]);
			Console.WriteLine(c);
		}
	}
}