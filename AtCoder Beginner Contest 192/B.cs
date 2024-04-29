using System;
using System.Linq;
using System.Collections.Generic;
using static System.Console;

class A
{
    static int[] Read() => Array.ConvertAll(ReadLine().Split(), int.Parse);
    static void  Main()
    {
        var s = ReadLine();

        var read = "Yes";

        for (var i = 0; i < s.Length; i++)
        {
            var moji = s[i];

            switch (i%2)
            {
                case 0:
                    if (char.IsUpper(moji))
                    {
                        read = "No";
                    }
                    break;

                case 1:
                    if (char.IsLower(moji))
                    {
                        read = "No";
                    }
                    break;
            }

            if (read == "No") break;
        }

        Write(read);
    }
}