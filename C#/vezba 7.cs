/*
  Write a C# program that takes a number as input and print its multiplication table
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_7 {
  class Program {
    static void Main(string[] args) {
      int num;
      Console.Write("Enter the number: ");
      num = Convert.ToInt16(Console.ReadLine());
      for (int i=0; i<=10; i++)
        Console.WriteLine("{0} * {1} = {2}", num, i, num*i);
      Console.ReadKey();
    }
  }
}
