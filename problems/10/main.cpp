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
     bool isMatch(string s, string p) {

      if (p.size() == 0 || p[0] == '*') {
        return (s.size() == 0 && p[0] != '*');
      }
      string tr;
      int idx = 0;

      while (idx < p.size()) {
        if (idx < p.size() - 1 && p[idx + 1] == '*') {
          tr.push_back(p[idx]);
          idx += 2;

          while (idx < p.size() - 1 && p[idx + 1] == '*' && p[idx] == tr.back()) {
            idx += 2;
          }
          tr.push_back('*');
        }
        else {
          tr.push_back(p[idx++]);
        }
      }
      return regex(s, tr, 0, 0);
    }

    bool regex(const string & s, const string & p, int idx, int ptr) {

      if (idx >= s.size() || ptr >= p.size()) {
        if (ptr < p.size() - 1 && p[ptr + 1] == '*')
          return regex(s, p, idx, ptr + 2);
        return idx == s.size() && ptr == p.size();
      }

      if (ptr < p.size() - 1 && p[ptr + 1] == '*') {

        for (int i = 0; i <= s.size() - idx; i++) {
          if (p[ptr] == '.') {
            if (regex(s, p, idx + i, ptr + 2))
              return true;
          }
          else if (i == 0 || s[idx + i - 1] == p[ptr]) {
            if (regex(s, p, idx + i, ptr + 2))
              return true;
          }
          else {
            return false;
          }
        }
      }
      else if (p[ptr] == '.') {
        return regex(s, p, idx + 1, ptr + 1);
      }
      else {
        return s[idx] == p[ptr] && regex(s, p, idx + 1, ptr + 1);
      }
      return false;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}