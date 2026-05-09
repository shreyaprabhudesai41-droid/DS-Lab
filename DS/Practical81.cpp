#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

// Insert at beginning
void insertBeg(int x) {
    node* temp = new node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

// Insert at end
void insertEnd(int x) {
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;

    if(head == NULL) {
        head = temp;
        return;
    }

    node* t = head;
    while(t->next != NULL)
        t = t->next;

    t->next = temp;
}

// Delete from beginning
void deleteBeg() {
    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

// Display
void display() {
    node* t = head;
    while(t != NULL) {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, x;

    do {
        cout << "\n1.InsertBeg\n2.InsertEnd\n3.DeleteBeg\n4.Display\n5.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> x;
                insertBeg(x);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> x;
                insertEnd(x);
                break;

            case 3:
                deleteBeg();
                break;

            case 4:
                display();
                break;
        }

    } while(choice != 5);

    return 0;
}