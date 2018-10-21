/*
  Najveci zajednicki delilac dva broja
*/

#include <iostream>
using namespace std;

#define MAX(a, b) ((a)>(b)? (a): (b))

int main() {
  int a, b;

  printf("Unesite dva broja: ");
  scanf("%d%d", &a, &b);

  while (a>0 && b>0) {
    if (a>=b) a-=b;
    else b-=a;
  }
  printf("Najveci zajednicki delilac je: %d\n", MAX(a, b));

  return 0;
}