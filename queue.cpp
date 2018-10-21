/*
    Queue
*/

#include <iostream>
using namespace std;

#define MAXSIZE 10 // queue size, 10 elements

struct Queue {
private:
  int queue[MAXSIZE];
  int front = -1;
  //int rear = -1; // rear is always at position 0

public:
  int peek() {
    return queue[front];
  }

  bool isfull() { 
    if (front == MAXSIZE-1)
      return true;
    else
      return false;
  }

  bool isempty () {
    if (front == -1)
      return true;
    else
      return false;
  }

  void enqueue(int data) {
    if (!isfull()) {
      if(!isempty())
        for (int i=front; i>=0; i--)
          queue[i+1] = queue[i];
      front++;
      queue[0] = data;
    } else
      printf ("Could not insert data, Queue is full.\n");
  }

  int dequeue() {
    int data;
    if(!isempty()) {
      data = queue[front];
      front--;
      return data;
    } else
      printf ("Could not retrieve data, Queue is empty.\n");
  }
};

int main() {
  Queue queue;

  // insert 10 elements in queue
  for (int i=0; i<10; i++)
    queue.enqueue(i);
  queue.enqueue(5); // insert one more element

  // remove 10 elements from queue
  for (int i=10; i>0; i--)
    printf("%d ", queue.dequeue());
  putchar('\n');
  queue.dequeue(); // remove one more element

  return 0;
}