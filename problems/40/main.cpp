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
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>> res;
      vector<int> tmp;

      sort(candidates.begin(), candidates.end());
      rec(candidates, target, 0, res, tmp);

      return res;
    }
    void rec(const vector<int> & cds, int target, int idx, vector<vector<int>> & res, vector<int> & tmp) {
      if (target == 0) {
        res.push_back(tmp);
        return;
      }
      if (target < 0)
        return;

      int prev = -1;
      for (int i = idx; i < cds.size(); i++) {

        while (cds[i] == prev) {
          i++;
          if (i == cds.size())
            return;
        }
        prev = cds[i];
        tmp.push_back(cds[i]);
        rec(cds, target - cds[i], i + 1, res, tmp);
        tmp.pop_back();
      }
    }
};


//=====================================================================

int main() {

  Solution s;
    
}