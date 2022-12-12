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