/*
  Domaci zadatak
  Napisati jednu strukturu i listu podataka
		
  Autor: Cvijetinovic Dejan, Web Aplikacije, grupa 1
  Datum: 19.10.2018
*/

#include <iostream>
#include <list>
using namespace std;

class Imenik {
  struct Kontakt {
    char
      ime[20],
      prezime[30],
      telefon[11];
  };
  list<Kontakt> imenik;
  
public:
  // Unos novog kontakta
  void unos() {
    Kontakt novi;
    printf("\n\n --- Unos novog clana ---\n\n");
    printf("Unesite ime: ");
    scanf("%s", novi.ime);
    printf("Unesite prezime: ");
    scanf("%s", novi.prezime);
    printf("Unesite broj telefona: ");
    scanf("%s", novi.telefon);
    getchar();
    imenik.push_back(novi);
  }

  // Prikaz celog imenika
  void prikaz() {
    printf("\n\n --- Prikaz imenika ---\n\n");
    for (
      list<Kontakt>::iterator it=imenik.begin(); it!=imenik.end(); it++)
      printf("%s %s %s\n", (*it).ime, (*it).prezime, (*it).telefon);
  }

  // Brisanje celog imenika
  void brisanje() {
    char ch;
    printf("\n\n -- Brisanje imenika ---\n\n");
    printf("Da li ste sigurni da zelite da izbrisete ceo imenik? [d/n]: ");
    ch = getchar();
    getchar();
    if (ch=='d' || ch=='D')
      while (!imenik.empty())
        imenik.pop_front();
  }
};

int main() {
  Imenik imenik;
    
  // meni
  bool izlaz = false;
  while (!izlaz) {
    char ch;
    printf("\n\n --- Telefonski imenik ---\n\n");
    printf("1. Unos novog clana\n");
    printf("2. Prikaz imenika\n");
    printf("3. Brisanje imenika\n");
    printf("4. Izlaz\n\n");
    printf("Unesite broj za ponudjenu operaciju: ");
    ch = getchar();
    getchar();
    switch (ch) {
      case '1':
        imenik.unos();
        break;
      case '2':
        imenik.prikaz();
        break;
      case '3':
        imenik.brisanje();
        break;
      case '4':
        izlaz = true;
        break;
      default:
        printf("\nPogresna komanda!");
    }
  }
  return 0;
}