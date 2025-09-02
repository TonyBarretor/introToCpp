#include <iostream>
using namespace std;

int main() {
    int x1 = 6;

    if ( x1 <10 ){
        if (x1 < 5){
            cout << "Line A" << endl;
        }
        else {
            cout << "Line B" << endl;
        }
    }

    if (x1 < 10){
        if (x1 < 5){
            cout << "Line A" << endl;
        } 
        }//here is where end the statement related to the if (x<5) 
        else { //this else is related to x1<10, and nothing happens because x1 was true
            
            cout << "Line B" << endl;
        }

    
    return 0;
}
