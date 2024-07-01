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
    int myAtoi(string s) {

      if (s.size() == 0) {
        return 0;
      }
      int idx = 0;

      while (idx < s.size() && isspace(s[idx])) {
        idx++;
      }
      bool sign = true;

      if (idx < s.size() && s[idx] == '+') {
        idx++;
      } else if (idx < s.size() && s[idx] == '-') {
        idx++;
        sign = false;
      }
      int res = 0;

      while (idx < s.size() && isdigit(s[idx])) {
        if (sign ? res > (INT_MAX - (s[idx] - '0')) / 10 : res < (INT_MIN + (s[idx] - '0')) / 10) {
          return sign ? INT_MAX : INT_MIN;
        }
        res *= 10;
        res += (s[idx] - '0') * (sign ? 1 : -1);
        idx++;
      }
      return res;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}