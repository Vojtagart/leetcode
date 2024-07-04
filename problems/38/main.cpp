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
    string countAndSay(int n) {
      
      string ret = "1";

      for (int i = 1; i < n; i++) {

        string newRet;

        for (int j = 0; j < ret.size(); j++) {

          char cur = ret[j];
          int cnt = 1;

          while (j < ret.size() - 1 && ret[j + 1] == cur) {
            cnt++;
            j++;
          }

          newRet.push_back(cnt + '0');
          newRet.push_back(cur);
        }
        ret = newRet;
      }
      return ret;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}