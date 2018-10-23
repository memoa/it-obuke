/*
  Write a C# program to print the result of dividing two numbers
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_3 {
  class Program {
    static void Main(string[] args) {
      double a, b;
      Console.WriteLine("Unesite dva broja: ");
      a = Convert.ToDouble(Console.ReadLine());
      b = Convert.ToDouble(Console.ReadLine());
      Console.WriteLine("Kolicnik brojeva {0} i {1} je {2}", a, b, a / b);
      Console.ReadKey();
    }
  }
}
