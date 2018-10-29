/*
  Zadatak 1
  Write a C# program to check whether a given number is even or odd

  Autor: Dejan Cvijetinovic
  Datum: 29.10.2018
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Domaci_zadaci_07 {
  class Program {
    static void Main(string[] args) {
      Console.Write("Unesite ceo broj: ");
      int broj = Convert.ToInt32(Console.ReadLine());
      if (broj%2 == 0)
        Console.WriteLine("Broj je paran.");
      else
        Console.WriteLine("Broj je neparan.");
      Console.ReadKey();
    }
  }
}
