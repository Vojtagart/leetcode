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
    int reverse(int x) {

      int res = 0;
      bool isPos = (x >= 0);

      while (x != 0) {

        if (isPos ? res > INT_MAX / 10 : res < INT_MIN / 10) {
          return 0;
        }
        res *= 10;
        res += x % 10;
        x /= 10;
      }
      return res;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}