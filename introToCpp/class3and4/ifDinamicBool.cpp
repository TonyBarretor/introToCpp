#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter other number: ";
    cin >> num2;

    bool b;

    if(num1 > num2)
    cout << "Number 1 is greater than Number 2" << endl;
    else if(num1 < num2)
    cout << "Number 2 is greater than Number 1"<< endl;
    else
    cout << "Number 1 and 2 are equal"<< endl;

    return 0;

}