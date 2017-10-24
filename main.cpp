#include <iostream>
using namespace std;

const int LEN = 5;
int main() {
    //pointer = address

    int i = 9;
    int *pi = &i;

    int iarr[LEN] = {31, 45, 78, 99, -8};
    cout << "Value of i is: " << i << endl;
    cout << "the address of i is: " << &i << endl;
    cout << " value of pi is: " << pi << endl;
    cout << "the address of pi is: " << &pi << endl;
    //Display the value living at pi
    //Dereference operator *
    cout << " value of the address living at pi is " << pi << endl;
    i = 10;
    cout << "value of i is: " << i << endl;
    cout << " value of the address living at pi is: " << *pi << endl;
    //Modify value using pointer
    *pi = 11;
    cout << " value of i is: " << i << endl;
    cout << "value of the address living at pi is: " << *pi << endl;

    //Loop over array
    for (int i = 0; i < LEN; i++) {
        cout << iarr[i] << endl;

        return 0;
    }
}