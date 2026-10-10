#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node* prev;
};

int main() {

    // Creating nodes
    Node* n0 = new Node();
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();

    // 10
    n0->value = 10;
    n0->prev = nullptr;
    n0->next = n1;

    // 20
    n1->value = 20;
    n1->prev = n0;
    n1->next = n2;

    // 30
    n2->value = 30;
    n2->prev = n1;
    n2->next = n3;

    // 40
    n3->value = 40;
    n3->prev = n2;
    n3->next = n4;

    // 50
    n4->value = 50;
    n4->prev = n3;
    n4->next = nullptr;

    Node* head = n0;
    Node* tail = n4;


    // Insert 25 at beginning
    Node* newNode = new Node();

    newNode->value = 25;
    newNode->prev = nullptr;
    newNode->next = head;

    head->prev = newNode;
    head = newNode;


    // Insert 60 at end
    Node* lastNode = new Node();

    lastNode->value = 60;
    lastNode->prev = tail;
    lastNode->next = nullptr;

    tail->next = lastNode;
    tail = lastNode;


    // Find 40 using while loop
    Node* current = head;

    while (current != nullptr) {

        if (current->value == 40) {

            // Create new node 45
            Node* middleNode = new Node();

            middleNode->value = 45;

            // Connect new node with current and next node
            middleNode->prev = current;
            middleNode->next = current->next;

            // Update next node's prev
            current->next->prev = middleNode;

            // Update current node's next
            current->next = middleNode;

            break;
        }

        current = current->next;
    }


    // Print list
    current = head;

    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }

    return 0;
}