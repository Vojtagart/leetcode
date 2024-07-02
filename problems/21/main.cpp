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
      ListNode * root = nullptr, * p1 = list1, * p2 = list2, * ptr;

      while (p1 || p2) {
        if ((p2 == nullptr) || (p1 != nullptr && p1->val <= p2->val)) {
          if (root == nullptr) {
            ptr = root = new ListNode(p1->val);
          } else {
            ptr->next = new ListNode(p1->val);
            ptr = ptr->next;
          }
          p1 = p1->next;
        } else {
          if (root == nullptr) {
            ptr = root = new ListNode(p2->val);
          } else {
            ptr->next = new ListNode(p2->val);
            ptr = ptr->next;
          }
          p2 = p2->next;
        }
      }
      return root;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}