/*
  Domaci zadatak
  Uneti ime i prezime i prikazati na ekran
	
	Autor: Dejan Cvijetinovic, Web Aplikacije, grupa 1
	Datum: 21.10.2018
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ime_i_prezime {
  class Program {
    static void Main(string[] args) {
      string ime, prezime;
      Console.Write("Unesite Vase ime: ");
      ime = Console.ReadLine();
      Console.Write("Unesite Vase prezime: ");
      prezime = Console.ReadLine();
      Console.WriteLine("Bravo {0} {1}, uspesno ste napisali Vas prvi C# program.", ime, prezime);
    }
  }
}
