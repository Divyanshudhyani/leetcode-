class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int n = nums.size();
        
        int maxi = 0 ;
        int value = 0;
    
        
     for(int i = 0 ; i < n -1 ; i++){
         if(nums[i+1] == nums[i] && nums[i] == 1){
             maxi = maxi + 1;
         }
         else{
             if(nums[i] == 1)
                 maxi=maxi+1;
             value = max(maxi,value);
             maxi = 0;
         }
     } 
      if(nums[n-1]==1 ){
          maxi= maxi+1;
          value = max(maxi ,value);
      }
     
        return value;
    }
};