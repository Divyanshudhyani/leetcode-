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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;

        ListNode* ptr = head;
        int n = 1; 
        while (ptr->next) {
             ptr = ptr->next;
             n++;
        }

    
        ptr->next = head;

        int stepsToNewHead = n - (k % n);

   
        while (stepsToNewHead--) {
            ptr = ptr->next;
        }

    
        ListNode* newHead = ptr->next;
        ptr->next = nullptr;

        return newHead;
    }
};