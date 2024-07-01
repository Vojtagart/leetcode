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
    int maxArea(vector<int>& height) {
      int max = 0;
      int st = 0, ed = height.size() - 1;

      while (st < ed) {

        if (max != 0 && max / (ed - st) == 0)
          break;

        int ar = (ed - st) * (std::min(height[st], height[ed]));
        max = std::max(ar, max);

        if (height[st] <= height[ed]) {
          st++;
        }
        else {
          ed--;
        }
      }
      return max;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}