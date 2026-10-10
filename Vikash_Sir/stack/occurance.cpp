#include <iostream>
#include <algorithm>
using namespace std;

int arr[8] = {};
int a = 0;

void push(int data)
{
    arr[a] = data;
    a++;
}

void pop()
{
    a--;
}

void top()
{
    cout << arr[a - 1];
}

void display()
{
    for (int i = a - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}

void sortStack()
{
   sort(arr, arr+a);
}

int main()
{
    push(1);
    push(3);
    push(0);
    push(4);
    push(2);
    push(0);
    push(0);
    push(7);

    cout << "before sorting:" << endl;
    display();

    sortStack();

    cout << "after sorting:" << endl;
    display();

    return 0;
}