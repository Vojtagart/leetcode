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
    ListNode* swapPairs(ListNode* head) {
      ListNode * ptr = head;

      if (ptr && ptr->next) {
        head = ptr->next;
        ListNode * tmp = head->next;
        head->next = ptr;
        ptr->next = tmp;
      }
      while (ptr && ptr->next && ptr->next->next) {
        ListNode * first = ptr->next->next;
        ptr->next->next = first->next;
        first->next = ptr->next;
        ptr->next = first;
        ptr = ptr->next->next;
      }
      return head;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}