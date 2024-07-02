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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
      int len = 0;
      for (ListNode * ptr = head; ptr; ptr = ptr->next) {
        len++;
      }
      if (len - n == 0) {
        ListNode * ret = head->next;
        delete head;
        return ret;
      }
      ListNode * ptr = head;
      for (int i = 1; i < len - n; i++) {
        ptr = ptr->next;
      }
      ListNode * next = ptr->next->next;
      delete ptr->next;
      ptr->next = next;

      return head;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}