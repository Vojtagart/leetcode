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
    ListNode * reverseKGroup(ListNode* head, int k) {
      ListNode * dummy = new ListNode(0, head);
      ListNode * ptr = dummy;

      if (k == 1)
        return head;
      
      while (true) {

        ListNode * check = ptr;

        for (int i = 0; i < k; i++) {
          if (!check->next)
            return dummy->next;
          check = check->next;
        }
        ListNode * prev = nullptr;
        ListNode * cur = ptr->next;
        ListNode * next = nullptr;
        ListNode * first = cur;

        for (int i = 0; i < k; i++) {
          next = cur->next;
          cur->next = prev;
          prev = cur;
          cur = next;
        }
        ptr->next = prev;
        first->next = cur;
        ptr = first;
      }
      return dummy->next;
    }
};

//=====================================================================

int main() {

  Solution s;
    
}