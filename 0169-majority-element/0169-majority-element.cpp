class Solution {
public:
    int majorityElement(vector<int>& nums) {
         map<int , int> myMap;
        
        int n = nums.size();
        
        for(int i = 0 ; i < n; i++){
            myMap[nums[i]]++;
        }
        
        int maxi = INT_MIN;
        int value ;
        for(auto it : myMap){
            
             if(it.second > maxi){
                 maxi = it.second;
                 value = it.first;
             }
        }
        return value;
    }
};