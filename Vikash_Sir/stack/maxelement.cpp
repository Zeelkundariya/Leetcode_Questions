#include <iostream>
using namespace std;

int arr[6] = {};
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

void maxElement()
{
    int max = arr[0];

    for (int i = 1; i < a; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "max element:" << max << endl;
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

    maxElement();

    return 0;
}
















