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
    vector<string> generateParenthesis(int n) {
      vector<string> res;

      rec("", 0, n, res);

      return res;
    }
    void rec(const string & str, int open, int n, vector<string> & res) {
      if (str.size() == n * 2) {
        res.push_back(str);
      } else {
        if ((str.size() - open) / 2 + open < n) {
          rec(str + "(", open + 1, n, res);
        }
        if (open > 0) {
          rec(str + ")", open - 1, n, res);
        }
      }
    }
};


//=====================================================================

int main() {

  Solution s;
  auto res = s.generateParenthesis(3);

  printContainer(res);
    
}