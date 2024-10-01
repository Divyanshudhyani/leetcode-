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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode* ptr = head;
       if(ptr->next==nullptr){
           ptr=nullptr;
           return ptr;
       }
       int count= 1;
       while(ptr!=nullptr && ptr->next!=nullptr){
           count++;
           ptr=ptr->next;
       }
       ptr = head; 
       int middle = count/2;
       int n = 1;
       while(n < middle){
           n++;
           ptr= ptr->next;
       }
       ptr->next = ptr->next->next;
        
     return head;
       
    }
};