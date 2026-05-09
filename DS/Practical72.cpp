#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node *front = NULL, *rear = NULL;

// Enqueue (insert)
void enqueue(int x) {
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;

    if(rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

// Dequeue (delete)
void dequeue() {
    if(front == NULL) {
        cout << "Queue is empty\n";
        return;
    }
    node* temp = front;
    cout << "Deleted: " << front->data << endl;
    front = front->next;

    if(front == NULL)
        rear = NULL;

    delete temp;
}

// Display
void display() {
    node* t = front;
    while(t != NULL) {
        cout << t->data << " ";
        t = t->next;
    }
}

int main() {
    int choice, x;

    do {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cin >> x;
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;
        }

    } while(choice != 4);

    return 0;
}