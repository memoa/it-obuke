/*
  Write a C# program that removes specific character from non-empty
  string using index of a character
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_11 {
  class Program {
    static string remove_char(string str, int n) {
      return str.Remove(n, 1);
    }

    static void Main(string[] args) {
      string str = "COode Academy";
      int pos = 1;
      Console.WriteLine("Remove character from string \"{0}\" at position {1}", str, pos);
      Console.WriteLine("Result = \"{0}\"",remove_char(str, pos));
      Console.ReadKey();
    }
  }
}
