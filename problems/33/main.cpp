#include <bits/stdc++.h>

using namespace std;

template <typename _C>
void printContainer(const _C & container) {
  for (const auto & x : container) {
    cout << x << endl;
  }
}

//=====================================================================


class Solution {
  public:
    int search(vector<int>& nums, int target) {
      int l = 0;
      int h = nums.size() - 1;

      while (l <= h) {
        int mid = (l + h) / 2;

        if (nums[mid] == target) {
          return mid;
        } else if (nums[l] <= nums[mid]) {
          if (target < nums[mid] && target >= nums[l])
            h = mid - 1;
          else  
            l = mid + 1;
        } else {
          if (target > nums[mid] && target <= nums[h])
            l = mid + 1;
          else  
            h = mid - 1;
        }
      }
      return -1;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}