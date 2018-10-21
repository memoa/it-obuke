/*
	Domaci Zadatak
	verzija 1
	
	Napisati program koji unosi brojeve u niz.
	Kada zbir elemenata bude 1000, prekinuti unos brojeva.
	
	Autor: Dejan Cvijetinovic, Web Aplikacije, grupa 1
	Datum: 15.10.2018
*/

#include <iostream>

using namespace std;

int main() {
    int a[1000];
    int n;
    
    printf("Unesite velicinu niza: ");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        printf("Unesite element na poziciju %d u nizu: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Uneti niz je: ");
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
        
    return 0;
}