class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();
        int zero = 0 ;
        int one = 0 ;
        int two = 0 ;
        for(int i  = 0 ; i< n ; i++){
            if(nums[i] == 0){
                zero++;
            }
            else if(nums[i] == 1){
                one++;
            }
            else{
                two++;
            }
        }
        
        int sum = zero + one ;
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(count < zero){
                nums[i] = 0 ;
                count++;
            }
            else if(count < sum){
                nums[i] = 1;
                count++;
            }
            else{
                nums[i] = 2;
                count++;
            }
        }
         
    }
};