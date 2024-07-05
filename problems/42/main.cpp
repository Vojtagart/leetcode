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
    int trap(vector<int>& height) {
      int left[height.size()];
      int right[height.size()];

      int max = 0;
      for (int i = 0; i < height.size(); i++) {
        left[i] = max;
        max = std::max(height[i], max);
      }
      max = 0;
      for (int i = height.size() - 1; i >= 0; i--) {
        right[i] = max;
        max = std::max(height[i], max);
      }
      int vol = 0;
      for (int i = 0; i < height.size(); i++) {
        int water = std::min(left[i], right[i]) - height[i];
        vol += (water > 0)  ? water : 0;
      }
      return vol;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}