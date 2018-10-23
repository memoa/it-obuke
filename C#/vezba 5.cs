/*
  Write a C# program to print the output of multiplication of three numbers
  which will be entered by user
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_5 {
  class Program {
    static void Main(string[] args) {
      int a, b, c;
      Console.WriteLine("Unesite tri broja: ");
      a = Convert.ToInt16(Console.ReadLine());
      b = Convert.ToInt16(Console.ReadLine());
      c = Convert.ToInt16(Console.ReadLine());
      Console.WriteLine("{0} * {1} * {2} = {3}", a, b, c, a*b*c);
      Console.ReadKey();
    }
  }
}
