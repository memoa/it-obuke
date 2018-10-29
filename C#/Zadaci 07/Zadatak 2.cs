/*
  Zadatak 2
  Write a C# program to check whether a given number is positive or negative

  Autor: Dejan Cvijetinovic
  Datum: 29.10.2018
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Zadatak_2 {
  class Program {
    static void Main(string[] args) {
      Console.Write("Unesite broj: ");
      double broj = Convert.ToDouble(Console.ReadLine());
      if (broj < 0)
        Console.WriteLine("Broj je negativan.");
      else
        Console.WriteLine("Broj je pozitivan.");
      Console.ReadKey();
    }
  }
}
