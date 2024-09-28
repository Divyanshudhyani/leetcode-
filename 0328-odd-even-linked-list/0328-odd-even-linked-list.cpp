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
    ListNode* oddEvenList(ListNode* head) {
       ListNode* ptr=head;
        
        ListNode* odd=new ListNode(-1);
        ListNode* even=new ListNode(-1);
        
        ListNode* odd_ptr=odd;
        ListNode* even_ptr=even;
        int count=1; 
        
        while(ptr!=NULL){
            if(count%2!=0){
                odd_ptr->next=ptr;
                odd_ptr=odd_ptr->next;
            }
            else{
                even_ptr->next=ptr;
                even_ptr=even_ptr->next;
            }
            count++;
            ptr=ptr->next;
        }
        even_ptr->next=NULL;
        odd_ptr->next=even->next;
        return odd->next;   
    }
};