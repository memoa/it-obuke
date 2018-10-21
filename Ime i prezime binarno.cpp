/*
	Domaci Zadatak 2

	Napisati ime i prezime u binarnom kodu
	
	Autor: Dejan Cvijetinovic, Web Aplikacije, grupa 1
	Datum: 14.10.2018
*/

// #include "pch.h"
#include <iostream>

using namespace std;

// Funkcija prikaza niza znakova u binarnom obliku
void printBin(const char* nizZnakova) {
	// i - iterator za poziciju karaktera u zadatom nizu koji se obradjuje
	for (int i=0; *(nizZnakova+i); i++) {
		printf("%c-", nizZnakova[i]); // prikaz karaktera koji se obradjuje
		// maska - koristi se za izdvajanje bitova iz karaktera
		for (unsigned char maska=0x80; maska; maska>>=1) {
			// prikaz bitova
			if (nizZnakova[i]&maska) {putchar('1');}
			else {putchar('0');}
		}
		putchar(' '); // razmak u prikazu izmedju obradjenih karaktera
	}
}

int main() {
	char ime[20], prezime[30];

	printf("Unesite vase ime: ");
	scanf("%s", ime);

	printf("Unesite vase prezime: ");
	scanf("%s", prezime);

	printf("Bravo, %s %s uspesno ste napisali vas prvi program\n", ime, prezime);
	
	printf("Vase ime i prezime u binarnom obliku je: \n");
	printBin(ime);
	putchar('\n');
	printBin(prezime);
	return 0;
}