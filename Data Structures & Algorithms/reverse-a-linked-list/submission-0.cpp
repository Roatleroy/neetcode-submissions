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
    ListNode* reverseList(ListNode* head) {
        ListNode *newList = new ListNode();

        if (head == nullptr)
        {
            return NULL;
        }

        newList->next = nullptr;
        newList->val = head->val;

        ListNode *trackNew;
        ListNode *secondTrackNew = newList;
        ListNode *trackOld = head;

        trackOld = trackOld->next;

        while (trackOld != NULL)
        {
            trackNew = new ListNode();
            trackNew->next = secondTrackNew;
            secondTrackNew = trackNew;
            trackNew->val = trackOld->val;

            trackOld = trackOld->next;
        }

        return secondTrackNew;
    }
};
