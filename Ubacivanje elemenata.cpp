#include <iostream>

using namespace std;

int main() {
    int LA[] = {1, 3, 5, 7, 8};
    int 
        item = 10, // nova vrednost za elements
        k = 3, // pozicija za novi element
        n = 5; // max elemenata
    int 
        i = 0, // brojac napred
        j = n; // brojac nazad

    printf("The original array elements are:\n");
    // prikaz niza
    for(i = 0; i<n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    n = n + 1;
    
    // pomeranje svih elemenata za jedno mesto
    while( j >= k) {
        LA[j+1] = LA[j];
        j = j - 1;
        
    } 
    LA[k] = item;
    printf("The array elements after insertion :\n");
    for(i = 0; i<n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    return 0;
}