/*
  Zadatak 4
  Write a C# program to read the value of an integer m and display the value of n is 1 when m is larger than 0,
  0 when m is 0 and 1 when m is less than 0

  Autor: Dejan Cvijetinovic
  Datum: 29.10.2018
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Zadatak_4 {
  class Program {
    static void Main(string[] args) {
      Console.Write("Unesite vrednost za broj m: ");
      int m = Convert.ToInt32(Console.ReadLine());
      int n = (m == 0) ? 0 : 1;
      Console.WriteLine("Vrednost broja n je "+n);
      Console.ReadKey();
    }
  }
}
