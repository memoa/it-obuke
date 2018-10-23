/*
  Write a C# program to print on screen the output of adding,
  subtracting, multipying and dividing of two numbers which
  will be entered by the user
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_6 {
  class Program {
    static void Main(string[] args) {
      int a, b;
      Console.WriteLine("Input the first number: ");
      a = Convert.ToInt16(Console.ReadLine());
      Console.WriteLine("Input the second number: ");
      b = Convert.ToInt16(Console.ReadLine());
      Console.WriteLine("Expected output:");
      Console.WriteLine("{0} + {1} = {2}", a, b, a+b);
      Console.WriteLine("{0} - {1} = {2}", a, b, a-b);
      Console.WriteLine("{0} * {1} = {2}", a, b, a*b);
      Console.WriteLine("{0} / {1} = {2}", a, b, a/b);
      Console.WriteLine("{0} % {1} = {2}", a, b, a%b);
    }
  }
}
