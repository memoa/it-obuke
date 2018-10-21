/*
    Domaci zadatak
    Aparat
    
    Autor: Dejan Cvijetinovic, Web Aplikacije, grupa 1
    Datum: 21.10.2018
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  struct Proizvod {
    char ime[10];
    int cena;
  };
  
  // Definisanje stanja aparata
  Proizvod aparat[] = {
    {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
    {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
    {"", 0}, {"", 0}, {"voda", 50}, {"voda", 50}, {"voda", 50},
    {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
    {"", 0}, {"", 0}, {"kafa", 45}, {"kafa", 45}, {"", 0},
    {"", 0}, {"", 0}, {"sok", 100}, {"", 0}, {"", 0}
  };
  const short MAX = 30;
    
  short novac = 0;
    
  while (true) {
    // Prikaz proizvoda
    bool prazan = true;
    printf("Sifra     Naziv   Cena\n");
    for (int i=0; i<MAX; ++i) {
      if (aparat[i].cena!=0) {
        printf("%3d. %10s %3ddin\n", i, aparat[i].ime, aparat[i].cena);
        prazan = false;
      }
    }

    // Da li je aparat prazan?
    if (prazan) {
      printf("Aparat je prazan.\n");
      if (novac>0)
        printf("Povrat novca: %ddin\n", novac);
      return 0; // Kraj programa
    }

    // Unos novca
    short noviUnos;
    printf("Ubacite novac (negativan broj za izlaz): ");
    scanf("%d", &noviUnos);
    if (noviUnos<0) {
      printf("Povrat novca: %ddin\n", novac);
      return 0; // Kraj programa
    }
    novac += noviUnos;
    printf("Vase stanje: %ddin\n", novac);

    // Izbor proizvoda
    short izbor;
    printf("Izaberite proizvod (unesite sifru proizvoda): ");
    scanf("%d", &izbor);

    // Da li je izabrani proizvod u aparatu?
    if (izbor<0 || izbor>=30 || aparat[izbor].cena==0) {
      printf("Izabrali ste prazno polje u aparatu.\n");
      continue;
    }
    
    // Prikaz izabranog proizvoda
    printf("Izabrali ste:\n");
    printf("%3d. %10s %3ddin\n", izbor, aparat[izbor].ime, aparat[izbor].cena);
        
    // Ima li dovoljno novca za kupovinu?
    bool novi_izbor = false;
    if (aparat[izbor].cena>novac) {
      printf("Nemate dovoljno novca.\n");
      continue;
    }
    
    // Proizvod je kupljen
    novac -= aparat[izbor].cena;
    for (int i=0; i<10; i++)
      aparat[izbor].ime[i] = '\0';
    aparat[izbor].cena = 0;
    printf("Proizvod je kupljen.\n");
    printf("Vase stanje: %ddin\n", novac);
  }
}

