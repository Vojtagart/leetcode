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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode * root = new ListNode();
      ListNode * ptr = root;

      while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
          ptr = ptr->next = list1;
          list1 = list1->next;
        } else {
          ptr = ptr->next = list2;
          list2 = list2->next;
        }
      }
      ptr->next = list1 == nullptr ? list2 : list1;

      ListNode * ret = root->next;
      delete root;
      return ret;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}