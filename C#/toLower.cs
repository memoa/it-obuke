/*
  Zadatak 5
  Write C# program to convert a given string into lowercase

  Autor: Dejan Cvijetinovic, Web Aplikacije, grupa 1
  Datum: 27.10.2018
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace toLower {
  class Program {
    static void Main(string[] args) {
      string text = "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.";
      Console.WriteLine(text.ToLower());
    }
  }
}
