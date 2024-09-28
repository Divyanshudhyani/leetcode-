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
    bool isPalindrome(ListNode* head) {
      vector<int> myVec;
        
        ListNode* ptr = head;
        
        while(ptr!=NULL){
            int val = ptr->val;
            myVec.push_back(val);
            ptr = ptr -> next;
        }
        
        int n = myVec.size();
        
        int i = 0;
        int j = n-1;
        
        for(i, j ; i<= j ; i++ , j--){
            if(myVec[i]!=myVec[j]) return false;
        }
        
        return true;  
    }
};