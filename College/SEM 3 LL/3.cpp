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

// __________________________INSERTION___________________

void inhead(node *&head, int val) { // Pass by refernce arguements
  node *n = new node(val);
  n->next = head;
  head = n;
}

void inbtwn(node *&head, int key, int val) {
  node *n = new node(val);
  node *temp = head;
  while (temp->data != key) {
    temp = temp->next;
    if (temp == NULL) {
      cout << "Element not found" << endl;
      return;
    }
  }
  n->next = temp->next;
  temp->next = n;
}

void intail(node *&head, int val) {
  node *n = new node(val);

  if (head == NULL) {
    head = n;
    return;
  }

  node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = n;
}

// __________________________DISPLAY___________________

void display(node *head) { // Pass by pointer arguements
  node *temp = head;
  cout << "The linked list  : ";

  while (temp != NULL) {
    cout << temp->data << " --> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {
  node *head = NULL;
  intail(head, 1);
  intail(head, 2);
  intail(head, 3);
  display(head);
  inhead(head, 5);
  display(head);
  inbtwn(head, 1, 8);
  display(head);
  int f = 1;
  while (f == 1) {
    cout << "_________________________________" << endl
         << "1.Inserting at head" << endl
         << "2.Inserting in betweeen" << endl
         << "3.Inserting at end" << endl
         << "4.Display Linked list" << endl
         << "5.Exit" << endl
         << "_________________________________" << endl;
    int ch;
    cout << "Enter option number : ";
    cin >> ch;
    if (ch == 1) {
      int d;
      cout << "Enter data : ";
      cin >> d;
      inhead(head, d);
    } else if (ch == 2) {
      int d, k;
      cout << "Enter data : ";
      cin >> d;
      cout << "Enter previous Element : ";
      cin >> k;
      inbtwn(head, k, d);
    } else if (ch == 3) {
      int d;
      cout << "Enter data : ";
      cin >> d;
      intail(head, d);
    } else if (ch == 4) {
      display(head);

    } else if (ch == 5) {
      cout << "Exit....";
      f = 0;
    } else {
      cout << "Invalid option ... !";
    }
  }
  return 0;
}