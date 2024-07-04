#include <bits/stdc++.h>

using namespace std;
#define BOARD_SIZE 9

template <typename _C>
void printContainer(const _C & container) {
  for (const auto & x : container) {
    for (const auto & y : x)
      cout << y << " ";
    cout << endl;
  }
}

//=====================================================================


struct Constraints {
  bool lines[BOARD_SIZE][BOARD_SIZE];
  bool cols[BOARD_SIZE][BOARD_SIZE];
  bool boxes[BOARD_SIZE][BOARD_SIZE];

  Constraints() {
    for (int i = 0; i < BOARD_SIZE; i++) {
      for (int j = 0; j < BOARD_SIZE; j++) {
        lines[i][j] = false;
        cols[i][j] = false;
        boxes[i][j] = false;
      }
    }
  }
};

class Solution {
  public:
    void solveSudoku(vector<vector<char>>& board) {

      Constraints start;
      if (!fillConstraints(board, start))
        return; // No Solution

      solveRec(board, start, 0, 0);
    }

    bool solveRec(vector<vector<char>> & board, Constraints & constr, int row, int col) {

      if (row == 9) 
        return true;
      if (board[row][col] != '.')
        return solveRec(board, constr, row + (col == 8), (col + 1) % 9);

      for (int i = 0; i < 9; i++) {
        if (addConstraint(constr, row, col, i)) {
          board[row][col] = '1' + i;

          if (solveRec(board, constr, row + (col == 8), (col + 1) % 9))
            return true;

          board[row][col] = '.';
          removeConstraint(constr, row, col, i);
        }
      }
      return false;
    }

    bool addConstraint(Constraints & constr, int row, int col, int num) {
          
      if (constr.lines[row][num])
        return false;
      if (constr.cols[col][num])
        return false;
      if (constr.boxes[3 * (row / 3) + col / 3][num])
        return false;

      constr.lines[row][num] = true;
      constr.cols[col][num] = true;
      constr.boxes[3 * (row / 3) + col / 3][num] = true;

      return true;
    }

    void removeConstraint(Constraints & constr, int row, int col, int num) {
      constr.lines[row][num] = false;
      constr.cols[col][num] = false;
      constr.boxes[3 * (row / 3) + col / 3][num] = false;
    }
    
    bool fillConstraints(vector<vector<char>> & board, Constraints & constr) {

      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

          if (board[i][j] == '.')
            continue;
          
          int num = board[i][j] - '1';

          if (!addConstraint(constr, i, j, num))
            return false;
        }
      }
      return true;
    }
};


//=====================================================================

int main() {

  Solution s;

  vector<vector<char>> board = {
  {'5','3','.','.','7','.','.','.','.'},
  {'6','.','.','1','9','5','.','.','.'},
  {'.','9','8','.','.','.','.','6','.'},
  {'8','.','.','.','6','.','.','.','3'},
  {'4','.','.','8','.','3','.','.','1'},
  {'7','.','.','.','2','.','.','.','6'},
  {'.','6','.','.','.','.','2','8','.'},
  {'.','.','.','4','1','9','.','.','5'},
  {'.','.','.','.','8','.','.','7','9'}
  };

  s.solveSudoku(board);

  cout << "result:" << endl;
  printContainer(board);
    
}