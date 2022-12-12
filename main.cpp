#include <iostream>
#include "funcs.h"
using namespace std;

int main()
{
    //TASK A
    cout << "TASK A\n---------------------------\n\n";
    std::string result = printRange(-2, 10);
    cout << result << endl;

    //TASK B
    cout << "\nTASK B\n---------------------------\n\n";
    int x = sumRange(1, 3);
    cout << "This is " << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << "That is " << y << endl;   // 52

    //TASK C
    cout << "\nTASK C\n---------------------------\n\n";
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it

    return 0;
}