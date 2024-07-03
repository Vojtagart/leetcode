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
    int strStr(string haystack, string needle) {
      for (int i = 0; i < 1 + static_cast<int>(haystack.size()) - static_cast<int>(needle.size()); i++) {
        bool broken = false;
        for (int j = 0; j < needle.size(); j++) {
          if (haystack[i + j] != needle[j]) {
            broken = true; break;
          }
        }
        if (!broken)
          return i;
      }
    return -1;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}