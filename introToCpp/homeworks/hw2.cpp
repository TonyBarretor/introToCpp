#include <iostream>

using namespace std;

int main(){
    int x1;
    cout << "Enter a number a greater than 0: ";
    cin >> x1;

    if (x1 == 5){
    cout << "x1 is equal to 5\n";
    x1 = 0;
    }
    else if (x1 < 5){
    cout << "x1 is less than 5\n";
    x1 = 1;
    }
    else {
    cout << "x1 is greater than 5\n";
    x1 = 2;
    } 

    switch(x1)
    {
        case 0:
        cout << "x1 is equal to 5\n";
        break;
        case 1:
        cout << "x1 is less than 5\n";
        break;
        case 2:
        cout << "x1 is greater than 5\n";
        break;
    }
    return 0;

}