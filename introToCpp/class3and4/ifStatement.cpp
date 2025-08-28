#include <iostream>

using namespace std;

int main(){
    int x1 = 5, y1 = 5;

    bool b = (x1 == y1); //here I store the result of the comparison if is true or false
    if (b)
    cout << "x1 and y1 are equal1" << endl;
    
    cout << "b is "<< b << endl; //here I get 1 because is true
    return 0;
}