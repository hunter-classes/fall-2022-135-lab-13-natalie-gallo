#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"

TEST_CASE("TASK A"){
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
    CHECK(printRange(-2, 5) == "-2 -1 0 1 2 3 4 5 ");
    CHECK(printRange(3, 6) == "3 4 5 6 ");
}

TEST_CASE("TASK B"){
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(3, 5) == 12);
}

TEST_CASE("TASK C"){
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

    CHECK(sumArray(arr, size) == 43);
    CHECK(sumArray(arr, 9) == 64);
    CHECK(sumArray(arr, 5) == 34);

    delete[] arr;         // deallocate it
}

TEST_CASE("TASK D"){
    CHECK(isAlphanumeric("ABCD") == true);       // true (1)
    CHECK(isAlphanumeric("Abcd1234xyz") == true); // true (1)
    CHECK(isAlphanumeric("KLMN 8-7-6") == false);  // false (0)
}


TEST_CASE("TASK E"){
    CHECK(nestedParens("((()))") == true);     // true (1)
    CHECK(nestedParens("()") == true);         // true (1)
    CHECK(nestedParens("") == true);           // true (1)

    CHECK(nestedParens("(((") == false);         // false (0)
    CHECK(nestedParens("(()") == false);         // false (0)
    CHECK(nestedParens(")(") == false);          // false (0)
    CHECK(nestedParens("a(b)c") == false);       // false (0)
}