using System;

class B
{
    static int[] Read() => Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    static void Main()
    {
        Read();
        var a = Read();
        var b = Read();

        var ans = 0;
        for (var i = 0; i < a.Length; i++)
        {
            ans += a[i] * b[i];
        }
            
        Console.Write(ans == 0 ? "Yes" : "No");
    }
}