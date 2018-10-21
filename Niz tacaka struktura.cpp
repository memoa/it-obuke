/*
	Niz tacaka
	Ovaj program omogucava unos 100 tacaka u niz
	Moguc je i prekid unosa tacaka na komandu 'n' ili 'N'
	
	Autor: Cvijetinovic Dejan, Web Aplikacije, grupa 1
	Datum: 17.10.2018
*/

#include <iostream>
using namespace std;

int main() {
    struct Tacka {
        int x, y;
        void prikaz() {
            printf("Koordinate tacke = (%d, %d)\n", x, y);
            //printf("Vrednost tacka.x = %d\nAdresa tacka.x = %u\n",
            //    (*this).x, &((*this).x));
            //printf("Vrednost tacka.x = %d\nAdresa tacka.x = %u\n",
            //    this->x, &(this->x));
        };
        void unos() {
            printf("Unesite x koordinatu: ");
            scanf("%d", &x);
            //scanf("%d", &((*this).x));
            //scanf("%d", &(this->x));
            printf("Unesite y koordinatu: ");
            scanf("%d", &y);
        }
    };
    //Tacka tacka = {5, 6};
    //Tacka tacke[] = {{1, 2}, {6, 8}, {9, 4}, {7, 0}, {6, 2}};
    Tacka tacke[100];
    char ch;
    int duzina;
    // Unos tacaka
    printf("*** Unos tacaka ***\n\n");
    for (duzina=0; duzina<100; duzina++) {
        printf("Tacka %d\n", duzina+1);
        tacke[duzina].unos();
        if (duzina<99) {
            printf("Unos sledece tacke (d/n): ");
            getchar();
            ch = getchar();
            if (ch=='n' || ch=='N') break;
        }
    }
    // Prikaz tacaka
    printf("\n*** Prikaz tacaka ***\n\n");
    for (int i=0; i<duzina+1; i++) {
        printf("Tacka %d\n", i+1);
        tacke[i].prikaz();
    }
    return 0;
}
