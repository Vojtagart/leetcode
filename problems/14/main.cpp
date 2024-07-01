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
    string longestCommonPrefix(vector<string>& strs) {

    if (strs.size() == 0)
      return "";

    string ret;
        
    for (int i = 0; i < strs[0].size(); i++) {

      char c = strs[0][i];

      for (const auto & x : strs) {
        if (x.size() < i || x[i] != c)
          return ret;
        }
        ret.push_back(c);
      }
      return ret;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}