class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
        int arr[n];
        
        int a = 0;
        
        for(int i = 0 ; i <  n ; i++){
            a = a^nums[i];
        }
        
        
        for(int i = 0 ; i <= n ; i++) {
            a = a ^ i;
        }
        
        return a; 
    }
};