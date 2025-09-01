#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    //Remember the first statement next to the if is related to the if
    if(num1 == num2)
    cout << "The number " << num1 << " is equal to " << num2 << endl;
    cout << "Another statement"<< endl;

    //Here we are going to use the curly brackets to point out the block
    //That is related to the if

    if(num1 > num2){
        cout << "The number " <<num1 << " is greater than" << num2 << endl;
        cout << "If the if is 0 (false) is not showing this line";
    }

    int x1 = 5, y1 = 15;
    if (x1 = 6)
    cout << "If statement" << endl;
    return 0;

    
}