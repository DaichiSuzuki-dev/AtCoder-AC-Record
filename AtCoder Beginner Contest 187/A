using static System.Console;
 
class A 
{
  static void Main() 
  {
    var ab = ReadLine().Split();
      
    var A = ab[0];
    var B = ab[1];
    
    int aS = 0;
    int bS = 0;
    
    for (var i = 0; i < 3; i++)
    {
      var a = A.Substring(i, 1);
      var b = B.Substring(i, 1);
      
      aS += int.Parse(a);
      bS += int.Parse(b);
    }
    
    WriteLine(aS == bS ? aS : aS < bS ? bS : aS);
  }
}