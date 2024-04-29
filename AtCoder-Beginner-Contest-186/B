using System;

class B
{
	static int[] Read() => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
	
	static void Main()
	{
		var HW = Read();
		var min = 100;
		var sum = 0;
		for (var i = 0; i < HW[0]; i++)
		{
			var A = Read();
			for (var j = 0; j < HW[1]; j++)
			{
				min = Math.Min(min, A[j]);
				sum += A[j];
			}
		}
		Console.Write(sum - min * HW[0] * HW[1]);
	}
}