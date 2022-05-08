#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"

TEST_CASE("print range function"){

  CHECK(printRange(-1,4) == "-1 0 1 2 3 4 ");
}
TEST_CASE("print range function not in range"){
  CHECK(printRange(8,7) == "");
}
TEST_CASE("sumrange function test"){
  int y = sumRange(1, 3);

  CHECK(y == 6);
  int z = sumRange(-2, 10);
  CHECK(z == 52);

}
TEST_CASE("sumrange function test for incorrect interval"){
  int y = sumRange(4, 3);
  CHECK(y == 0);
}
TEST_CASE("sumarray function"){
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

  int sum1 = sumArray(arr, size);

  CHECK(sum1 == 43);
}
TEST_CASE("sumarray function incorrect interval"){
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

  int sum1 = sumArray(arr, -3);

  CHECK(sum1 == 0);
}
TEST_CASE("isAlphanumeric function all letters"){
  CHECK(isAlphanumeric("ABCaDcz") == 1);
}
TEST_CASE("isAlphanumeric function all numbers"){
  CHECK(isAlphanumeric("123456789012") == 1);
}
TEST_CASE("isAlphanumeric function mix of letters and numbers"){
CHECK(isAlphanumeric("aB231x9") == 1);
}

TEST_CASE("isAlphanumeric function special character"){
CHECK(isAlphanumeric("aB231#x9") == 0);
}

TEST_CASE("isAlphanumeric function empty"){
CHECK(isAlphanumeric("") == 1);
}

TEST_CASE("Tests nestedParens function "){
CHECK(nestedParens("((()))") == 1);
CHECK(nestedParens("()") == 1);
CHECK(nestedParens("") == 1);
}

TEST_CASE("nestedParens function outputs false in these cases"){
CHECK(nestedParens("(((") == 0);
CHECK(nestedParens("(()") == 0);
CHECK(nestedParens(")()") == 0);
CHECK(nestedParens("a(b)c") == 0);         
}
