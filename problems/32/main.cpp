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
    int longestValidParentheses(string s) {
      stack<int> st;
      vector<bool> v(s.size(), false);

      for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
          st.push(i);
        } else if (!st.empty()) {
          v[i] = true;
          v[st.top()] = true;
          st.pop();
        }
      }
      int max = 0;
      int cnt = 0;
      for (bool x : v) {
        if (x == true) {
          cnt++;
        } else {
          max = std::max(max, cnt);
          cnt = 0;
        }
      }
      return max > cnt ? max : cnt;
    }
};


//=====================================================================

int main() {

  Solution s;
  string str = "()(()";

  cout << s.longestValidParentheses(str) << endl;
    
}