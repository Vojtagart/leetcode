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
    string longestPalindrome(string s) {
      int start = 0, end = 0;

      for (size_t i = 0; i < 2 * s.size() - 1; i++) {
        int st = i / 2, ed = i / 2 + (i % 2 == 1);

        if (s[st] != s[ed])
          continue;

        while (st > 0 && ed < s.size() - 1 && s[st - 1] == s[ed + 1]) {
          st--; ed++;
        }
        if (ed - st > end - start) {
          start = st;
          end = ed;
        }
      }
      string ret;
      for (size_t i = start; i <= end; i++) {
        ret.push_back(s[i]);
      }
      return ret;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}