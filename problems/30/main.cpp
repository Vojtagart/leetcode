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
    vector<int> findSubstring(string s, vector<string>& words) {

      vector<int> ret;
      wlen = words[0].size();
      clen = wlen * words.size();
      getFreq(words);

      for (int i = 0; i < words[0].size(); i++) {
        solveFrom(i, s, ret);
      }
      return ret;
    }

    void solveFrom(int l, const string & s, vector<int> & ret) {

      int r = l;
      unordered_map<string, queue<int>> seen;

      while (l <= static_cast<int>(s.size()) - clen) {

        string str = s.substr(r, wlen);
        auto p = freq.find(str);

        if (p == freq.end()) {
          l = r + wlen; r = l;
          continue;
        }
        auto it = seen.insert({str, queue<int>()}).first;
        it->second.push(r);

        if (it->second.size() > p->second) {
          l = max(l, it->second.front() + wlen);
          it->second.pop();
        }
        r += wlen;

        if (r - l == clen) {
          ret.push_back(l);
          l += wlen;
        }
      }
    }

    void getFreq(const vector<string> & words) {

      for (const auto & x : words) {
        auto p = freq.insert({x, 1});
        if (!p.second)
          p.first->second += 1;
      }
    }

  private:
    unordered_map<string, int> freq;
    int wlen;
    int clen;
};


//=====================================================================

int main() {

  Solution s;
  string str = "barfoofoobarthefoobarman";
  vector<string> vec = {"bar","foo","the"};
  auto res = s.findSubstring(str, vec);
  
  cout << "Result:" << endl;
  printContainer(res);
}