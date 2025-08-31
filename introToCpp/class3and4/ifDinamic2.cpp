#include <iostream>

using namespace std;

int main(){
    int x1, x2;
    cout << "Enter a number 1: ";
    cin >> x1;
    cout << "Enter a number 2: ";
    cin >> x2;

    bool greater, less;

    greater = (x1 > x2);
    less = (x1 < x2);
    
    if (greater)
    cout << "Number 1 is greater than Number 2\n";
    else if(less)
    cout << "Number 2 is greater than Number 1\n";
    else
    cout << "Number 1 and 2 is equal\n";

    cout << "The result was: \n" << (greater || less) << endl;

    return 0;

}