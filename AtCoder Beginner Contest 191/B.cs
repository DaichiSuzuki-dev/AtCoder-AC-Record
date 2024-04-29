using System.Linq;

class B
{
    static int[] Read() => System.Console.ReadLine().Split().Select(int.Parse).ToArray();
    static void Main()
    {
        var x = Read()[1];
        var a = Read();

        System.Console.Write(string.Join(" ", a.Where(m => m != x)));
    }
}