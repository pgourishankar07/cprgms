#include <iostream> // header file
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

class queue {
  public:
  node *front;
  node *back;

  queue() {
    front = NULL;
    back = NULL;
  }

  void enqu(int val) {
    node *n = new node(val);
    if (front == NULL) {
      back = n;
      front = n;
    }
    back->next = n;
    back = n;
  }

  void dequ() {
    if (front == NULL) {
      cout << "Queue underflow" << endl;
      return;
    }
    node *temp = front;
    cout << "Dequeued Element : " << front->data << endl;
    front = front->next;
    delete temp;
  }

  void display() {
    if (front == NULL) {
      cout << "Queue underflow" << endl;
      return;
    }
    node *temp = front;
    while (temp->next != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << temp->data << endl;
    return;
  }
};

int main() {

  queue q;
  q.enqu(1);
  q.enqu(2);
  q.enqu(3);
  q.enqu(4);
  cout << "Initial Queue created : " << endl;
  q.display();
  int f = 1;

  while (f == 1) {
    int ch;
    cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
    cout << "Enter your Choice : ";
    cin >> ch;
    if (ch == 1) {
      int dat;
      cout << "Enter data : ";
      cin >> dat;
      q.enqu(dat);
    } else if (ch == 2) {
      q.dequ();
    } else if (ch == 3) {
      q.display();
    } else if (ch == 4) {
      f = 0;
      cout << "Thank you....:)";
    } else {
      cout << "Invalid Choice";
    }
  }
  return 0;
}