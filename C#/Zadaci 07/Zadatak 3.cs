/*
  Zadatak 3
  Write a C# program to read the age of a candidateand determine whether it is eligible for casting his/her own vote

  Autor: Dejan Cvijetinovic
  Datum: 29.10.2018
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Zadatak_3 {
  class Program {
    static void Main(string[] args) {
      Console.Write("Koliko imate godina? ");
      int brojGodina = Convert.ToInt16(Console.ReadLine());
      if (brojGodina < 18)
        Console.WriteLine("Maloletni ste. Nemate pravo glasa.");
      else
        Console.WriteLine("Mozete ici na glasanje.");
      Console.ReadKey();
    }
  }
}
