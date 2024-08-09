class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            ans = ans^nums[i];
        }
        return ans;
        
        /*unordered_map<int , int> myMap;
        int n = nums.size();
        int ans = 0;
        
        
         for (int num : nums) {
            myMap[num]++;
         }
         

        for (const auto& pair : myMap) {
        if (pair.second == 1) {
           return pair.first;
        }
    }
        return 0;*/
    }
};