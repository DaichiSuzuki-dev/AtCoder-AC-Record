using System;

class C
{
    static int[] Read() => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    static void Main()
    {
        Read();
        var a = Read();

		var half = a.Length/2;

		var a1 = 0;
		var a2 = 0;
		for (var i = 0; i < half; i++)
        {
			a1 = Math.Max(a1, a[i]);
			a2 = Math.Max(a2, a[i+half]);
        }

		for (var i = 0; i < a.Length; i++)
        {
			if (Math.Min(a1, a2) == a[i])
            {
				Console.Write(i+1);
				break;
            }
        }
    }
}