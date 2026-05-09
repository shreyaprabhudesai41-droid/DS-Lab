#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* top = NULL;

// Push
void push(int x) {
    node* temp = new node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

// Pop
void pop() {
    if(top == NULL) {
        cout << "Underflow\n";
        return;
    }
    node* temp = top;
    cout << "Deleted: " << top->data << endl;
    top = top->next;
    delete temp;
}

// Display
void display() {
    node* t = top;
    while(t != NULL) {
        cout << t->data << " ";
        t = t->next;
    }
}

int main() {
    int choice, x;

    do {
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cin >> x;
                push(x);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;
        }

    } while(choice != 4);

    return 0;
}