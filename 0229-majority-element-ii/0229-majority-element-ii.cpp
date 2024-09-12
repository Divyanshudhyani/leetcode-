class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int> MyVector;
        
        int n = nums.size();
        
        unordered_map<int,int> MyMap;
        
        for(int i = 0 ; i < n ; i++){
            MyMap[nums[i]]++;
        }
        
        int largest = n/3;
        
        for(auto it : MyMap){
            if(largest < it.second){
                MyVector.push_back(it.first);
            }
        }
        return MyVector; 
    }
};