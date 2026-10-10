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

    cout << "Max Element = " << max << endl;
}

void removeElement(int target)
{
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == target)
        {
            for (int j = i; j < a - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            a--;
            break;
        }
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    removeElement(3);
    cout << "after remove:" << endl;
    display();

    return 0;
}

