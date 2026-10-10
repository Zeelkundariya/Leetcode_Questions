#include <iostream>
using namespace std;

int arr[7] = {};
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

void frequency(int target)
{
    int count = 0;

    for (int i = 0; i < a; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    cout << "frequency:" << count << endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(2);
    push(4);
    push(2);
    push(2);

    display();

   frequency(2);

    return 0;
}