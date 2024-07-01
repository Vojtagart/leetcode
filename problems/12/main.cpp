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
    string intToRoman(int num) {

      pair<int, string> vals [] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"},
        {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
      };
      string ret;

      for (int i = 0; i < 13; i++) {
        while (num >= vals[i].first) {
          num -= vals[i].first;
          ret += vals[i].second;
        }
      }
      return ret;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}