/*
  Write a C# program to print Hello and your namein a separate line
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_1 {
  class Program {
    static void Main(string[] args) {
      string ime;
      Console.Write("Unesite Vase ime: ");
      ime = Console.ReadLine();
      Console.WriteLine("Hello {0}", ime);
      Console.ReadKey();
    }
  }
}
