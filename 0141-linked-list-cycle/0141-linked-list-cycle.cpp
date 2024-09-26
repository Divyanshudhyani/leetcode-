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
    bool hasCycle(ListNode *head) {
       if (head == nullptr || head->next == nullptr){
            return false;
        }
        ListNode* start = head; 
        ListNode* end = head;
        while (start != nullptr && end != nullptr && end->next != nullptr) {
            start = start->next;
            end = end->next->next; 
            if (start== end){
                return true;
            } 
        }
        return false;       
    }
};