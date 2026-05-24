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
        //now practically thinking  if we want to reverse a linked list 
        //how does a single linked list function ; this is current ; then there is next ; and prev ; initally there can be prev ; but there be next ; 
        //you job is to somehow use some clever swapping iterative method and move this forward

        //i know that once pre is not null
        //make store it somewhere
        //then modify the 

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
