/*
  Write a C# program that takes four numbers as input to calculate and print the average
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_8 {
  class Program {
    static void Main(string[] args) {
      int a, b, c, d;
      Console.Write("Enter the first number: ");
      a = Convert.ToInt16(Console.ReadLine());
      Console.Write("Enter the second number: ");
      b = Convert.ToInt16(Console.ReadLine());
      Console.Write("Enter the third number: ");
      c = Convert.ToInt16(Console.ReadLine());
      Console.Write("Enter the fourth number: ");
      d = Convert.ToInt16(Console.ReadLine());
      Console.WriteLine("The average of {0}, {1}, {2}, {3} is {4}",
        a, b, c, d, (a+b+c+d)/4);
      Console.ReadKey();
    }
  }
}
