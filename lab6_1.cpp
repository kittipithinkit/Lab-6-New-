#include <iostream>
using namespace std;

int main() {
    int Even_Count = 0;
    int Odd_Count = 0;
    int Number; 
    do {
        cout << "Enter an integer: ";
        cin >> Number;    
        if ( Number != 0) {
            if (Number % 2 == 0) {
                Even_Count++;
            } else {
                Odd_Count++;
            }
        }
    } while (Number != 0);
    cout << "#Even numbers = " << Even_Count << endl;
    cout << "#Odd numbers = " << Odd_Count << endl;

    return 0;
}