/*
  Write a C# program to convert form celsius degrees to Kelvin and Fahrenheit
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vezba_10 {
  class Program {
    static void Main(string[] args) {
      double celsius, kelvin, fahrenheit;
      Console.Write("Enter temperature in °C: ");
      celsius = Convert.ToDouble(Console.ReadLine());
      kelvin = celsius + 273;
      fahrenheit = celsius * 18 / 10 + 32;
      Console.WriteLine("{0}°C = {1}°K = {2}°F", celsius, kelvin, fahrenheit);
      Console.ReadKey();
    }
  }
}
