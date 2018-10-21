/*
  Linear Search
*/

#include <iostream>
using namespace std;

int intArray[] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};
int MAX = 10;

// this function makes a linear search
int find(int data) {
  int comparisons = 0;
  int index = -1;
  int i;
  
  // navigate through all items
  for (i=0; i<MAX; i++) {
    // count the comparisons made
    comparisons++;
    
    // if data found, break the loop
    if (data == intArray[i]) {
      index = i;
      break;
    }
  }
  
  printf("Total comparisons made: %d\n", comparisons);
  return index;
}
int main() {
  int number = 33;
  int position = find(33);

  if (position<0)
    printf("Number %d does not belong to array.\n", number);
  else
    printf("Number %d is at position %d in array.\n", number, position);

  return 0;
}