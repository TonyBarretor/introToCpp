#include <iostream>

using namespace std;

int main(){
    bool b1, b2; //declaring
    int x = 5, y = 10;

    //Initializing
    b1 = x < y; //here b1 = 5 < 10 (true = 1)
    b2 = y == x; //here is comparing y and x, that is false so i 0

    cout << "b1 is " << b1 << endl;
    cout << "b2 is " << b2 << endl;

    //boolalpha to show the words true or false

    cout << boolalpha << "b1 is " << b1 << endl;
    cout << "b2 is " << b2 << endl;

    bool b3; b3 = 10;
    cout << b3 << endl;
    return 0;

}