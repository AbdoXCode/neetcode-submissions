/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    set<int> listNode;
    bool hasCycle(ListNode* head) {
        if (!head) return false;
        ListNode* root = head;
        int seen = 0;

        while (root->next) {
            seen++;
            listNode.insert(root->val);
            root = root->next;

            if (seen > listNode.size()) return true;
        }
        return false;
    }
};
