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
        int count = 1;
       ListNode* ptr = head;
       if(ptr->next == nullptr){
           ptr = nullptr;
           return ptr;
       }
        
       while(ptr!=nullptr && ptr->next!=nullptr){
           ptr=ptr->next;
           count++;
       }
       
        
       if(count == n){
           head = head->next;
           return head;
       }  
        
       ptr = head;
       int i = 1;
       while(i<count-n){
           ptr= ptr->next;
           i++;
       }

       ptr->next = ptr->next->next;
       return head;
    }
};