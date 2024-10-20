class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0 ;
        int last = n-1;
        
        while(start < last){
            int mid = start + (last-start)/2;
            
            if(nums[mid]>nums[mid+1]){
                last = mid;
            }
            else{
                start = mid + 1;
            }
        }
        return start;
    }
};