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
    cout << "TASK B\n---------------------------\n\n";
    int x = sumRange(1, 3);
    cout << "This is " << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << "That is " << y << endl;   // 52

    return 0;
}