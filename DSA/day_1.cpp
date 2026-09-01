// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     cout << &x << "\n";
//     int *y = &x;
//     cout << y;
//     return 0;
// }


#include <iostream>
using namespace std;

struct Box{
    int value;
    Box* address;
};

int main(){

    Box* b1 = new Box();
    b1->value = 10;
    Box* b2 = new Box();
    b1->address = b2;

    
    return 0;
}