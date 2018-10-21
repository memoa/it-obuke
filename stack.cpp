/*
    Stack
*/

#include <iostream>
using namespace std;

#define MAXSIZE 10 // stack size, 10 elements

struct Stack {
private:
  int stack[MAXSIZE];
  int top = -1;

public:
  int peek() {
    return stack[top];
  }

  bool isfull() { 
    if (top == MAXSIZE-1)
      return true;
    else
      return false;
  }

  bool isempty () {
    if (top == -1)
      return true;
    else
      return false;
  }

  void push(int data) {
    if (!isfull()) {
      top++;
      stack[top] = data;
    } else
      printf ("Could not insert data, Stack is full.\n");
  }

  int pop() {
    int data;
    if (!isempty()) {
      data = stack[top];
      top--;
      return data;
    } else
      printf ("Could not retrieve data, Stack is empty.\n");
  }
};

int main() {
  Stack stack;

  // insert 10 elements in stack
  for (int i=0; i<10; i++)
    stack.push(i);
  stack.push(5); // insert one more element

  // remove 10 elements from stack
  for (int i=10; i>0; i--)
    printf("%d ", stack.pop());
  putchar('\n');
  stack.pop(); // remove one more element

  return 0;
}