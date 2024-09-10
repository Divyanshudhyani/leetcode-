class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 0)
            return 0;
        
        unordered_set<int> mySet;
        int longest = 1;
        
        for(int i = 0 ; i< n ; i++){
            mySet.insert(nums[i]);
        }
        for(auto it : mySet){
            if(mySet.find(it - 1) == mySet.end()){
                int cnt = 1;
                int x = it;
                while(mySet.find(x+1) != mySet.end()){
                    x = x+1;
                    cnt = cnt + 1;
                }
                longest = max(longest , cnt);
            }
        }
        return longest;
    }
};