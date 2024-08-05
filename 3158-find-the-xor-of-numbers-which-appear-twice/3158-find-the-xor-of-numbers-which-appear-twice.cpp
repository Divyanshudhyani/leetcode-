class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       unordered_map<int, int> freq;
        for(int i : nums)
        {
            freq[i]++;
        }

        int ans = 0;
        
        for (auto entry : freq)
        {
            if(entry.second == 2)
            {
                ans ^= entry.first;
            }
        }
        return ans;
    }
};