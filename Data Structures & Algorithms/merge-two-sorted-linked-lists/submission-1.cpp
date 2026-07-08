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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *fcrr = list1;
        ListNode *scrr = list2;

        vector<int> vec;

        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }
        while (fcrr != nullptr) {
            vec.push_back(fcrr->val);
            fcrr = fcrr->next;
        }

        while (scrr != nullptr) {
            vec.push_back(scrr->val);
            scrr = scrr->next;
        }

        sort(vec.begin(),vec.end());

        ListNode* head = new ListNode(vec[0]);

        ListNode* curr = head;

        for (int i =1;i<vec.size();i++) {
            curr->next = new ListNode(vec[i]);
            curr = curr->next;
        }

        return head;
    }
};
