class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0 ;
        int n =nums.size();
        int j = n-1;
        int ans = 0;
        while(i<n && j >= 0){
            if(nums[i]==nums[j] && i != j ){
                i++;
                j = n-1;
            }
            else{
                ans = i ;
                j--;
            }
        }
        return nums[ans];
    }
};