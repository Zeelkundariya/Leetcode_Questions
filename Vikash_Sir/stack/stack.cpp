#include <iostream>
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
    for (int i = a - 1; i >= 0; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    display();
    return 0;
}