#include <iostream>
#include <string>
#include "funcs.h"
using namespace std;

//TASK A 
std::string printRange(int left, int right){
    if (left > right){
        return "";
    }

    return to_string(left) + " " + printRange(left + 1, right);
}

//TASK B
int sumRange(int left, int right){
    if (left > right){
        return 0;
    }
    
    return left + sumRange(left + 1, right);
}

//TASK C
int sumArray(int *arr, int size){
    if (size < 0){
        return 0;
    }
    //start adding from last element and then decrement the size by 1
    return *(arr + (size - 1)) + sumArray(arr, size - 1); // 1. size = 10; 10 - 1 = [9] + (SIZE = 10 - 1 = 9)    2. size = 9; 9-1 = [8] + (SIZE = 8-1 = 7)
}