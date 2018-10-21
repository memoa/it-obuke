/*
	Domaci Zadatak
	verzija 2
	
	Napisati program koji unosi brojeve u niz.
	Kada zbir elemenata bude 1000, prekinuti unos brojeva.
	
	Autor: Dejan Cvijetinovic, Web Aplikacije, grupa 1
	Datum: 15.10.2018
*/

#include <iostream>

using namespace std;

int main() {
    int 
        a[1000], // niz brojeva koje unosimo
        duzina = 0, // kolicina unetih elemenata u niz, bice ogranicena do 1000
        sum = 0; // suma unetih elemenata, prekida se unos kad suma predje 1000

    while (sum<1000 && duzina<1000) { // petlja sa unosom elemenata u niz
        printf("Unesite element na poziciju %d u nizu: ", duzina);
        scanf("%d", &a[duzina]);
        sum += a[duzina];
        duzina++;
    }

    printf("Uneti niz je: "); // prikaz niza
    for (int i=0; i<duzina; i++)
        printf("%d ", a[i]);
        
    return 0;
}