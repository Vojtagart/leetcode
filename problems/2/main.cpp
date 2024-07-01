#include <bits/stdc++.h>

using namespace std;

template <typename _C>
void printContainer(const _C & container) {
  for (const auto & x : container) {
    cout << x << endl;
  }
}

//=====================================================================


struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
  public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    if (!l1 && !l2) {
      return new ListNode();
    }
    ListNode * root = nullptr, * ptr = nullptr;
    int carry = 0, num1, num2;

    while (l1 || l2) {
      if (l1) {
        num1 = l1->val;
        l1 = l1->next;
      } else {
        num1 = 0;
      }
      if (l2) {
        num2 = l2->val;
        l2 = l2->next;
      } else {
        num2 = 0;
      }
      int num = (num1 + num2 + carry) % 10;

      if (root == nullptr) {
        root = new ListNode(num);
        ptr = root;
      } else {
        ptr->next = new ListNode(num);
        ptr = ptr->next;
      }
      carry = (num1 + num2 + carry >= 10);
      }
      if (carry == 1) {
        ptr->next = new ListNode(1);
      }
      return root;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}