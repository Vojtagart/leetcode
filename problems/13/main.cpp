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
    int romanToInt(string s) {
        
      int idx = 0;
      int prev = 0, cur;
      int res = 0;

      for (int i = s.size() - 1; i >= 0; i--) {
        switch (s[i]) {
          case 'M' : cur = 1000; break;
          case 'D' : cur = 500; break;
          case 'C' : cur = 100; break;
          case 'L' : cur = 50; break;
          case 'X' : cur = 10; break;
          case 'V' : cur = 5; break;
          case 'I' : cur = 1; break;
        }
        res += (prev <= cur ? cur : -cur);
        prev = cur;
      }
      return res;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}