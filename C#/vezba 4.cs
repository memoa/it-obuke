/*
  Write a C# Sharp program to print the result of specified operations:
  1. -1 + 4 * 6 = 23
  2. ( 35 + 5 ) % 7 = 5
  3. 14 + -4 * 6 / 11 = 12
  4. 2 + 15 / 6 * 1 - 7 % 2 = 3
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_8 {
  class Program {
    static void Main(string[] args) {
      double a = -1, b = 4, c = 6, d, e, f;
      // -1 + 4 * 6
      Console.WriteLine("{0} + {1} * {2} = {3}", a, b, c, a + b * c);
      a = 35; b = 5; c = 7;
      // ((35 + 5) % 7
      Console.WriteLine("({0} + {1}) % {2} = {3}", a, b, c, (a + b) % c);
      a = 14; b = -4; c = 6; d = 11;
      // (14 + (-4) * 6 / 11)
      Console.WriteLine("{0} + {1} * {2} / {3} = {4}", a, b, c, d, a + b * c / d);
      a = 2; b = 15; c = 6; d = 1; e = 7; f = 2;
      // 2 + 15 / 6 * 1 - 7 % 2 == 5
      Console.WriteLine("{0} + {1} / {2} * {3} - {4} % {5} = {6}", a, b, c, d, e, f, a + b / c * d - e % f);
    }
  }
}
