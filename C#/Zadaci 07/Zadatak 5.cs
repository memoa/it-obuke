/*
  Zadatak 5
  Write a C# program to accept the height of a person in centimeter and categorize the person according to their height

  Autor: Dejan Cvijetinovic
  Datum: 29.10.2018
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Zadatak_5 {
  class Program {
    static void Main(string[] args) {
      Console.Write("Unesite visinu osobe u cm: ");
      double visina = Convert.ToDouble(Console.ReadLine());
      if (visina > 200)
        Console.WriteLine("Osoba je veoma visoka.");
      else if (visina > 180)
        Console.WriteLine("Osoba je visoka.");
      else if (visina > 170)
        Console.WriteLine("Osoba je srednje visine.");
      else if (visina > 150)
        Console.WriteLine("Osoba je niska.");
      else
        Console.WriteLine("Osoba je veoma niska.");
      Console.ReadKey();
    }
  }
}
