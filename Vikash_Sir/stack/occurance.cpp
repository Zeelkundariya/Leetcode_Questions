#include <iostream>
#include <algorithm>
using namespace std;

int arr[5] = {};
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
    sort(arr, arr + a);
}

int main()
{
    push(5);
    push(2);
    push(8);
    push(1);
    push(3);

    cout << "before sorting:" << endl;
    display();

    sortStack();

    cout << "after sorting:" << endl;
    display();

    return 0;
}