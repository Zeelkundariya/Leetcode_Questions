#include <iostream>
using namespace std;

struct node
{
    int value;
    node *address;
};

int main()
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();
    node *n5 = new node();

    n1->address = n2;
    n2->address = n3;
    n3->address = n4;
    n4->address = NULL;

    n1->value = 13;
    n2->value = 16;
    n3->value = 5;
    n4->value = 4;

    node *n0 = new node();
    n0->address = n1;
    n0->value = 16;

    int sum = 0;
    for (node *i = n0; i->address != NULL; i = i->address){
        sum = sum + i-> value;
    }
cout << sum << endl;
        return 0;
}