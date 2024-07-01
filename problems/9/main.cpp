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
    bool isPalindrome(int x) {

      if (x < 0 || (x != 0 && x % 10 == 0)) {
        return false;
      }
      int rev = 0;

      while (x > rev) {
        rev *= 10;
        rev += x % 10;
        x /= 10;
      }
      return (x == rev) || (x == rev / 10);
    }
};


//=====================================================================

int main() {

  Solution s;
    
}