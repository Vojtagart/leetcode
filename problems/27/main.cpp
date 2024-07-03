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
    int removeElement(vector<int>& nums, int val) {
      int idx = 0;

      for (int i = 0; i < nums.size(); i++) {
        int cur = nums[i];
        nums[idx] = nums[i];

        if (cur != val)
          idx++;
      }
      return idx;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}