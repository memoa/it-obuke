/*
  Write a C# program to print the sum of two numbers
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_2 {
  class Program {
    static void Main(string[] args) {
      int a, b;
      Console.WriteLine("Unesite dva broja: ");
      a = Convert.ToInt32(Console.ReadLine());
      b = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("Suma brojeva {0} i {1} je {2}", a, b, a+b);
      Console.ReadKey();
    }
  }
}
