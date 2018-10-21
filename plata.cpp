/*
  • Formulisati / nacrtati algoritam koji prikazuje postupak izračunavanja 
  • Bruto iznos plate radnika po minutu je 2 dinara 
  • Ukupan porez koji se odbija je 15% bruto iznosa plate
*/

#include <iostream>
using namespace std;

int main() {
  float bruto, procenat, neto;
  printf("Bruto iznos plate radnika po minutu: ");
  scanf("%f", &bruto);
  printf("Procenat koji se odbija: ");
  scanf("%f", &procenat);
  neto = (bruto-bruto*procenat/100)*60;
  printf("Neto iznos plate radinka po satu: %.2f", neto);
  return 0;
}

