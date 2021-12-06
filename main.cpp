#include <cassert>
#include <iostream>
#include "solution.h"

using namespace std;

void TestMoveZeroes() {
  Solution s;
  {
    vector<int> numbers{0, 1, 0, 3, 12};
    s.moveZeroes(numbers);
    assert((vector{1, 3, 12, 0, 0}) == numbers);
  }
  {
    vector<int> numbers{0};
    s.moveZeroes(numbers);
    assert((vector{0}) == numbers);
  }
  {
    vector<int> numbers{1, 2, 3, 4, 5};
    s.moveZeroes(numbers);
    assert((vector{1, 2, 3, 4, 5}) == numbers);
  }
}

int main() {
  TestMoveZeroes();
  std::cout << "Ok!" << std::endl;
  return 0;
}
