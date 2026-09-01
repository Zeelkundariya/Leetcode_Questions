#include <iostream>
using namespace std;

int main(){
    int x = 10;
    cout << &x << "\n";
    int *y = &x;
    cout << y;
    return 0;
}