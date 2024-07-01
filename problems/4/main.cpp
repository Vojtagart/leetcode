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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int len = nums1.size() + nums2.size();
      int half = len / 2 + len % 2;
      int idx1 = 0, idx2 = 0, med = 0;

      for (int i = 0; i < half; i++) {
        med = moveForward(nums1, nums2, idx1, idx2);
      }
      if (half * 2 != len) {
        return med;
      }
      int tmp = moveForward(nums1, nums2, idx1, idx2);
      return (med + tmp) / 2.0;
    }

    int moveForward(vector<int>& nums1, vector<int>& nums2, int & idx1, int & idx2) {
      if ((idx2 >= nums2.size()) ||
        (idx1 < nums1.size() && nums1[idx1] <= nums2[idx2])) {
        return nums1[idx1++];
      }
      return nums2[idx2++];
    }
};


//=====================================================================

int main() {

  Solution s;
    
}