#include <iostream>
#include <string>
#include <cctype>
#include "recursion.h"

std::string printRange(int left, int right ){
  //returns string of inputted numbers from left inputted number to the right inputted number
  std::string answer = "";
  if (left <= right){
    return std::__cxx11::to_string(left) + " " + printRange(left+1, right);
}
else{
  return answer;
}

}


int sumRange(int left, int right){
  //returns sum of the numbers from left inputted number to the right inputted number

  if (left <= right){
    return left + sumRange(left+1, right);
  }
  else{
    return 0;
  }
}

int sumArray(int *arr, int size){
  //returns sum of the numbers in the array

  if (size >= 1){
    return arr[size-1] + sumArray(arr, size-1);
  }
  else{
    return 0;
  }
}

bool isAlphanumeric(std::string s){
  //returns true if all characters in the string are letters or digits

    if (s.size() < 1){
      return true;
    }
    if (!isalpha(s[s.size()-1]) && !isdigit(s[s.size()-1]))
    {
      return false;
    }

    else{
      return isAlphanumeric(s.substr(0, s.size()-1));
    }
}

bool nestedParens(std::string s){
  //if string is empty or the string contains only nested parentheses then true is outputted
  if (s.size() < 1){
    return true;
  }
  if ((s[0] != '(') || (s[s.size() - 1] != ')')){
    return false;
  }
  else
  {
      return nestedParens(s.substr(1, s.size() - 2));
  }

}
