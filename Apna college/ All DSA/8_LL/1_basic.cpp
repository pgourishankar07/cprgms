#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node *next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node *n) {
  while (n != NULL) {
    cout << n->data << " -> ";
    n = n->next;
  }
  cout << "NULL";
}

// Driver's code
int main() {
  // declares three pointers to Node objects, and initializes them to NULL or 0 as value of the data(eg:Node *head=NULL;)
  Node *head;
  Node *second;
  Node *third;

  // allocate 3 nodes in the heap
  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 1;      // assign data in first node
  head->next = second; // Link first node with second

  second->data = 2; // assign data to second node
  second->next = third;

  // third->data = 3; // assign data to third node
  third->next = NULL;

  // Function call
  printList(head);

  return 0;
}
