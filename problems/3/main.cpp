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
    int lengthOfLongestSubstring(string s) {
      int max = 0;
      int st = 0, ed = 0;

      while (ed < s.size()) {
        for (size_t i = st; i < ed; i++) {
          if (s[i] == s[ed]) {
            st = i + 1;
            break;
          }
        }
        max = max < ed - st + 1 ? ed - st + 1 : max;
        ed += 1;
      }
    return max;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}