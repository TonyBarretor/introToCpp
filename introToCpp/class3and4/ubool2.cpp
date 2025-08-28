#include <iostream>

using namespace std;
//I am going to play with variables to know if they have values TRUE OR FALSE 
//It is not a good idea to use numerical values for boolean variables

bool b1, b2;
int x = 5, y = 10;

int main(){
b1 = x < y;
b2 = x == 10;

cout << "b1 is " << b1 << endl;
cout << "b2 is " << b2 << endl;
//To show the words true or false we need the boolalpha

cout << boolalpha << "b1 is " << b1 << endl;
cout << "b2 is " << b2 << endl;

//cout << noboolalpha;

bool b3;
b3 = 10;
cout << "b3 is " << b3 << endl;

return 0;
}



