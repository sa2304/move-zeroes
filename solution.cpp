//
// Created by Антон Шмидт on 06.12.2021.
//

#include "solution.h"

using namespace std;

void Solution::moveZeroes(vector<int> &nums) {
  for (size_t i = 0; i < nums.size(); ++i) {
    if (!nums[i]) {
      size_t k = i + 1;
      for (; k < nums.size(); ++k) {
        if (nums[k]) break;
      }
      if (k < nums.size()) {
        swap(nums[i], nums[k]);
      } else break;
    }
  }
}
