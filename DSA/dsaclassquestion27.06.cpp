//Q-3 create singly linked list and write insert in between operation where targetvalue is given after which you have insert node as targeted exisiting node targeted value is 18 and newNodeData is 64 and node is 10,32,47,18,59

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void insertAtLast(Node*& head, int value) {

    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp =head;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next =newNode;
}

void display(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}
int main() {

    Node* head = NULL;

    insertAtLast(head,10);
    insertAtLast(head,32);
    insertAtLast(head,47);
    insertAtLast(head,18);
    insertAtLast(head,59);
    insertAtLast(head,64);

    display(head);

    return 0;
}

