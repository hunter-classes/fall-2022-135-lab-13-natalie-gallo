#include <iostream>
#include <string>
#include <cctype>
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

//TASK D
bool isAlphanumeric(std::string s){
    if (s == ""){
        return true;
    }

    if (!isalnum(s[0])){
        return false;
    } //else
    //disregard last checked character and check if next character isalnum
    s = s.substr(1);
    return isAlphanumeric(s);
}

//TASK E
bool nestedParens(std::string s){
    if (s == ""){
        return true;
    }

    if (s.length() % 2 != 0){
        return false;
    }
    
    int length = s.length();

    if(s[0] != '(' || s[length-1] != ')'){
        return false;
    }

    s = s.substr(1, length - 2);
    return nestedParens(s);
}
