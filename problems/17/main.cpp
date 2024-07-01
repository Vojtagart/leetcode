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
    vector<string> letterCombinations(string digits) {

      if (digits.size() == 0)
        return {};
      vector<string> res = {""};

      for (int i = 0; i < digits.size(); i++) {
        vector<string> newRes;

        for (char c : m_vals[digits[i] - '0' - 2]) {
          for (const string & str : res) {
            newRes.emplace_back(string(str + c));
          }
        }
        res = newRes;
      }
      return res;
    }
  private:
    static const vector<char> m_vals [];
};

const vector<char> Solution::m_vals [] = {
  {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'},
  {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}
};


//=====================================================================

int main() {

  Solution s;
  string str = "23";

  auto res = s.letterCombinations(str);
  printContainer(res);
    
}