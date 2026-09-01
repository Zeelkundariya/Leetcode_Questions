
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





#include <iostream>
using namespace std;
//Node Factory ----11111111111
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};


//Doublylist Class ----22222222
class Dbylinklist{
    private:
    Node *head;
    Node *tail;
    
    public:
    Dbylinklist(){
        head=nullptr;
        tail=nullptr;
    }
    
    void InsertionAtfirst(int data){
        Node *temp=new Node(data);
        
        if(head==nullptr){
            head=temp;
            tail=temp;
            return;
        }
        
        else{
            head->prev=temp;
            temp->next=head;
            head=temp;
        }
    }
    
    void display(){
        Node *curr=head;
        while(curr!=nullptr){
            cout<<curr->data<<endl;
            curr=curr->next;
        }
    }
    
    
    
    
    void display1(){
        Node *last=tail;
        while(last!=nullptr){
            cout<<last->data<<endl;
            last=last->prev;
        }
    }
};





int main()
{
    Dbylinklist obj;
    obj.InsertionAtfirst(20);
    obj.InsertionAtfirst(30);
    obj.InsertionAtfirst(40);
    obj.display();
    obj.display1();
    

    return 0;
}
