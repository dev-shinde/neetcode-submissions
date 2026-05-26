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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //when they are saying for removing the n node ; first we need to reverse the list ; becuase we can only travel forward and not backward
        //and then traverse it ; and print it as next ; and then again reverse it
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;

        for(int i=0;i<n;i++)
        {
            fast = fast->next;
        }

        ListNode* slow = dummy;

        while(fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;

        return dummy->next;
    }
};
