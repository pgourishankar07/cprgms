#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *next;
  node(int val) {
    data = val;
    next = NULL;
  }
};

void push(node *&head, int val) { // Pass by refernce arguements
  node *n = new node(val);
  n->next = head;
  head = n;
}

void pop(node *&head) {
  node *temp = head;
  // cout<<"Popped Element : "<<temp->data<<endl;
  head = temp->next;
  delete temp;
}

void display(node *&head) { // Pass by pointer arguements
  node *temp = head;
  while (temp != NULL) {
    cout << "  " << temp->data << " \n";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  node *head = NULL;
  push(head, 5);
  push(head, 10);
  push(head, 15);
  cout << "Initial Stack created : " << endl;
  display(head);
  int f = 1;
  while (f == 1) {
    cout << "_________________________________" << endl
         << "1.Push" << endl
         << "2.Pop" << endl
         << "3.Display" << endl
         << "4.Exit" << endl
         << "_________________________________" << endl;
    int ch;
    cout << "Enter option number : ";
    cin >> ch;
    if (ch == 1) {
      int d;
      cout << "Enter data : ";
      cin >> d;
      push(head, d);
    } else if (ch == 2) {
      pop(head);
    } else if (ch == 3) {
      display(head);
    } else if (ch == 4) {
      cout << "Exit....";
      f = 0;
    } else {
      cout << "Invalid option ... !";
    }
  }
  return 0;
}