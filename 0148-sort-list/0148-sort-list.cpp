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
    ListNode* sortList(ListNode* head) {
       vector<int> myVec;
       ListNode* ptr = head;
       while(ptr!=nullptr){
           myVec.push_back(ptr->val);
           ptr = ptr->next;
       }
        sort(myVec.begin() , myVec.end());
        ptr = head;
        int i = 0 ;
        while(ptr!=nullptr){
            ptr->val = myVec[i];
            i++;
            ptr= ptr->next;
        }
        return head; 
    }
};