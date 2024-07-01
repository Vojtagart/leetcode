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
    string convert(string s, int numRows) {
      if (numRows <= 1) {
        return s;
      }
      string res;
      res.reserve(s.size() + 1);
      int ofs = 2 * numRows - 2;

      for (int row = 0; row < numRows && row < s.size(); row++) {

        int idx1 = row, idx2 = ofs - row;

        while (idx1 < s.size()) {

          res.push_back(s[idx1]);

          if (row != 0 && idx2 < s.size() && row != numRows - 1) {
            res.push_back(s[idx2]);
          }
          idx1 += ofs;
          idx2 += ofs;

        }
      }
      return res;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}