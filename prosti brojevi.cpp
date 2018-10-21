/*
  Prosti brojevi
*/

#include <iostream>
using namespace std;

#define SIZE 1000

int main() {
  int primeArr[SIZE];
  int n, n_prime=0;

  printf("Program prikazuje maksimalno 1000 prostih brojeva.\n");
  printf("Unesite broj do kog se traze prosti brojevi: ");
  scanf("%d", &n);
  
  for (int i=2; i<=n && n_prime<SIZE; i++) {
    bool prime = true;
    int j=0;
    for (; j<n_prime; j++) {
      if (i%primeArr[j] == 0) {
        prime = false;
        break;
      }
    }
    if (prime) {
      primeArr[j] = i;
      n_prime++;
    }
  }
  
  printf("Prosti brojevi su:\n");
  for (int i=0; i<n_prime; i++)
    printf("%d ", primeArr[i]);
    
  return 0;
}