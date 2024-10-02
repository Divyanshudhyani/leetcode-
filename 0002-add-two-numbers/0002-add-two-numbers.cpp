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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry= 0 ;
        int sum;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        
        int n1 = 1;
        int n2 = 1;
        while(ptr1){
            n1++;
            ptr1=ptr1->next;
        }
        while(ptr2){
            n2++;
            ptr2=ptr2->next;
        }
        if(n1>n2){
            ptr1 = l1;
            ptr2 = l2;
        }
        else{
            ptr1 = l2;
            ptr2 = l1;
        }
        while(ptr1!= nullptr){
            if(ptr2==nullptr){
               sum = ptr1->val + carry ;
               carry = sum/10;
                sum = sum % 10;
                ptr1->val =sum;
                ptr1 = ptr1->next;
            }
            else{
                sum = ptr1->val + ptr2->val + carry;
                carry = sum/10;
                sum = sum%10;
                ptr1->val = sum;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
        }
        
        if(n1>n2){
            ptr1 = l1;
            ptr2 = l2;
        }
        else{
            ptr1 = l2;
            ptr2 = l1;
        } 
        while(ptr1->next!=nullptr){
            ptr1= ptr1->next;
        }
       
        if(carry == 1){
            ListNode* ptr = new ListNode (carry);;
            ptr1->next= ptr;
        }
        if(n1>n2){
            return l1;
        }
        else{
            return l2;
        }
    }
};