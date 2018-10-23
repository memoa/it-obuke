/*
  Write a C# program to check the sum of two given integers
  and return true if one of the integer is 20 of if their
  sum is 20
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_12 {
  class Program {
    static bool check_sum(int a, int b) {
      return a==20 || b==20 || a+b==20;
    }

    static void Main(string[] args) {
      int a, b;
      Console.Write("Enter first number: ");
      a = Convert.ToInt16(Console.ReadLine());
      Console.Write("Enter second number: ");
      b = Convert.ToInt16(Console.ReadLine());
      Console.Write("There is ");
      if (!check_sum(a, b))
        Console.Write("not ");
      Console.WriteLine("number 20 in a or b or their sum.");
      Console.ReadKey();
    }
  }
}
