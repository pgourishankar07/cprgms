#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
};

void display(Node *n) {

  while (n != NULL) {
    cout << n->data << " ";
    n = n->next;
  }
}

// void insertail(Node *&n, int val) {
//   Node *x;
//   x = new Node();
//   x->data = val;
//   while (n != NULL) {
//     n = n->next;
//     cout << n->data;
//   }
//   n->next = x;

//   x->next = NULL;
// }

int main() {
  Node *head = NULL;
  Node *sec = NULL;
  Node *thr = NULL;

  head = new Node();
  sec = new Node();
  thr = new Node();

  head->data = 1;
  sec->data = 2;
  thr->data = 3;

  head->next = sec;
  sec->next = thr;
  thr->next = NULL;
  //   insertail(head, 3);
  display(head);
}
