#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoublyList {
private:
    Node* head;

public:
    DoublyList() {
        this->head = nullptr;
    }

    void insertAtFirst(int value) {
        Node* temp = new Node(value);

        if (head == nullptr) {
            head = temp;
            return;
        }

        head->prev = temp;
        temp->next = head;
        head = temp;
    }

    void display() {
        if (head == nullptr) {
            cout << "The head is null, no nodes are there" << endl;
            return;
        }

        Node* temp = head;

        while (temp != nullptr) {
            cout << "Current node data is -> " << temp->data << endl;
            temp = temp->next;  // move to next node
        }
    }
};

int main() {
    DoublyList List;

    List.insertAtFirst(10);
    List.insertAtFirst(45);

    List.display();

    return 0;
}