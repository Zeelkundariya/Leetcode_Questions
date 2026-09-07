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

    n0->value = 10;
    n0->address = n1;
    n1->value = 25;
    n1->address = n1;
    n2->value = 30;
    n2->address = n1;
    n3->value = 5;
    n3->address = NULL;

    node* n4 = new node();
    n4->value = 20;
    n4->address = NULL;

    node* i = n0;
    while(i != NULL){
        if(i->value == 25){
        n4->address = i->address;
        i->address = n4;
    }
    i = i->address;
}


    

    return 0 ;
}