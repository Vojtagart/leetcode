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
    bool isValidSudoku(vector<vector<char>>& board) {

      const int size = 9;
      bool lines[size][size] = {false};
      bool cols[size][size] = {false};
      bool boxes[size][size] = {false};

      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

          if (board[i][j] == '.')
            continue;
          
          int num = board[i][j] - '1';
          
          if (lines[i][num])
            return false;
          lines[i][num] = true;

          if (cols[j][num])
            return false;
          cols[j][num] = true;

          if (boxes[3 * (i / 3) + j / 3][num])
            return false;
          boxes[3 * (i / 3) + j / 3][num] = true;
        }
      }
      return true;
    }
};


//=====================================================================

int main() {

  Solution s;
  vector<vector<char>> board = 
{{'5','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};

  cout << (s.isValidSudoku(board) ? "Valid" : "Invalid") << endl;

}