/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0,lenB=0;
        ListNode * node1 = headA;
        while(node1){
            lenA++;
            node1 = node1->next;
         }
        
        ListNode * node2 = headB;
        while(node2){
            lenB++;
            node2 = node2->next;
        }
        
        node1 = headA;
        node2 = headB;
       
        while(lenA>lenB) {
            node1=node1->next;
            lenA--;
        }
        while(lenA<lenB){
                 node2 = node2->next;
                  lenB--;
        }
        
           
        while(node1 && node2){
            if(node1 == node2){
                 return node1;
            }  
         else  {
             node1 = node1->next;
            node2 = node2->next;
         }
        }
        return NULL; 
    }
};