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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      ListNode * root = new ListNode();
      ListNode * ptr = root;

      auto cmp = [](const ListNode * x, const ListNode * y) -> bool {return x->val > y->val;};
      priority_queue<ListNode *, vector<ListNode*>, decltype(cmp)> q;

      for (const auto & x : lists) {
        if (x != nullptr)
          q.push(x);
      }

      while (!q.empty()) {
        ptr->next = q.top();
        q.pop();

        ptr = ptr->next;

        if (ptr->next != nullptr)
          q.push(ptr->next);
      }
      auto ret = root->next;
      delete root;
      return ret;
    }
};


//=====================================================================

int main() {

  Solution s;
    
}