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
    void reorderList(ListNode* head) {
        //now that we have the question lets solve it ;
        //lets have 2 nodes fast and slow and then lets exchange them ; 

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr)

        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
slow->next = nullptr;  // cut here
ListNode* curr = second;  // 
ListNode* prev = nullptr; 

        while(curr)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        //now for merging 

        ListNode* f1 = head;
        ListNode* f2 = prev;  

        while(f1 && f2){
    ListNode* tmp1 = f1->next;
    ListNode* tmp2 = f2->next;
    f1->next = f2;
    f2->next = tmp1;
    f1 = tmp1;      // ← you had temp but never moved f1
    f2 = tmp2;      // ← you had temp2 but never moved f2
}
    }
};
