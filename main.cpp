#include <iostream>
#include <string>
#include "recursion.h"

int main(){
    std::cout << "Task A uses a recusive function to print out the numbers on the interval of -4 to 8 inclusive\n" << std::endl;
    std::string x = printRange(-4,8);
    std::cout << x << std::endl;
    std::cout << "\nTask B uses a recusive function to print out the sum of the numbers on the interval of 1 to 3 inclusive = 6\n" << std::endl;

    int y = sumRange(1, 3);
    std::cout << y << std::endl;
    std::cout << "\nTask B uses a recusive function to print out the sum of the numbers on the interval of -2 to 10 inclusive = 52\n" << std::endl;

    int z = sumRange(-2, 10);
    std::cout << z << std::endl;


    std::cout << "\nTask C uses a recusive function to print out the sum of the numbers in the array with a size of 10 = 43\n" << std::endl;

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
    std::cout << "Sum is " << sum1 << std::endl;


    std::cout << "\nTask D uses a recusive function to print out 1 if all the characters in the string are alphabetic or digits; in this case the first 2 strings have ony alphabetic and digit characters so 1 is displayed.\n" << std::endl;
    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;
    std::cout << "\nTask E uses a recusive function to print out 1 if the parentheses are nested; in this case the first 2 strings have nested parentheses and thet third is an empty string so 1 is displayed.\n" << std::endl;
    std::cout << nestedParens("((()))") << std::endl;      // true (1)
    std::cout << nestedParens("()") << std::endl;          // true (1)
    std::cout << nestedParens("") << std::endl;            // true (1)



    std::cout << nestedParens("(((") << std::endl;         // false (0)
    std::cout << nestedParens("(()") << std::endl;         // false (0)
    std::cout << nestedParens(")(") << std::endl;          // false (0)
    std::cout << nestedParens("a(b)c") << std::endl;       // false (0)

  return 0;
}
