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
    bool isValid(string s) {
      vector<char> brack;

      for (char c : s) {
        switch (c) {
          case '(' : brack.push_back('('); break;
          case '[' : brack.push_back('['); break;
          case '{' : brack.push_back('{'); break;

          case ')' :
            if (brack.size() == 0 || brack.back() != '(') {
              return false;
            }
            brack.pop_back();
            break;
          case ']' :
            if (brack.size() == 0 || brack.back() != '[')
              return false;
            brack.pop_back();
            break;
          case '}' :
            if (brack.size() == 0 || brack.back() != '{')
              return false;
            brack.pop_back();
            break;
        }
      }
      return brack.size() == 0;
    }
};


//=====================================================================

int main() {

  Solution s;
  cout << s.isValid("()") << endl;
    
}