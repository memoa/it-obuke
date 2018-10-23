/*
  Write a C# program that takes an age (for example 20) as input
  and prints something as "You look older than 20"
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_9 {
  class Program {
    static void Main(string[] args) {
      int age;
      Console.WriteLine("Enter your age: ");
      age = Convert.ToInt16(Console.ReadLine());
      Console.WriteLine("You look older than {0}", age);
      Console.ReadKey();
    }
  }
}
