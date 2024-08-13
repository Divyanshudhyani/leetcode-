class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        bool value = true;
        
        int n = nums.size();
        int i = 0 ;
        int j = 0 ;
        
        while(nums[i]<0){
            i++;
            if(nums[i]>0){
                ans.push_back(nums[i]);
                value = false;
            }
        }
        
        while(i < n && j < n ){
            if(nums[i] > 0 && value == true){
                ans.push_back(nums[i]);
                j++;
                value = false;
            }
            else if(nums[j] < 0 && value == false){
                ans.push_back(nums[j]);
                i++;
                value = true;
            }
            else if(nums[i] < 0){
                i++;
            }
            else{
                j++;
            }
        }
      return ans; 
    }
};