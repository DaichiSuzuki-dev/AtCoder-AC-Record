using System;
using System.Linq;

class A 
{
  static void Main() 
  {
    var xy = Console.ReadLine().Split().Select(int.Parse).ToArray();
    Console.WriteLine(xy.Min() + 3 > xy.Max() ? "Yes" : "No");
  }
}