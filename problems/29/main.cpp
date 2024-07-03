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
    int divide(int dividend, int divisor) {
      int q = 0;

      if (divisor == 1)
        return dividend;
      if (divisor == -1)
        return dividend == INT_MIN ? INT_MAX : -dividend;
      bool sign = !((dividend >= 0) ^ (divisor >= 0));

      while (dividend == INT_MIN || abs(dividend) >= abs(divisor)) {
        long long newDiv = divisor, newQ = 1;

        while(abs(newDiv << 1) <= abs(dividend)) {
          newDiv <<= 1;
          newQ <<= 1;
        }
        sign ? dividend -= newDiv : dividend += newDiv;
        sign ? q += newQ : q -= newQ;
      }
      return q;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}