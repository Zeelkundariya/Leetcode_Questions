#include<iostream>
using namespace std;

struct node{
    int value;
    node* address;
};

int main(){

    node* n0 = new node();
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();

    n0->value = 4;
    n0->address = n1;
    n1->value = 5;
    n1->address = n1;
    n2->value = 1;
    n2->address = n1;
    n3->value = 9;
    n3->address = NULL;

    node* temp = n1->address;
    n1->value = temp->value;
    n1->address = temp->address;

    temp->address = NULL;

    return 0 ;
}