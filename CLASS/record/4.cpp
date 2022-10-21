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
    cout << "The Initial linked list created : ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// _______________________DELETE______________________

void del(node *head, int key) {
    node *temp = head;
    node *prev = NULL;

    if (temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    } else {
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "ELement not found to delete" << endl;
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
}

int main() {
    node *head = NULL;
    intail(head, 1);
    intail(head, 2);
    intail(head, 3);
    inhead(head, 5);
    inbtwn(head, 1, 8);
    display(head);
    del(head, 2);
    display(head);
    return 0;
}