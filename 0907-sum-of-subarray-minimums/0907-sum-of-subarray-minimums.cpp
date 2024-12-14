class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9+7;
        vector<int> mins;
        int n = arr.size();
        mins.push_back(n-1);
        vector<int> ans(n);
        ans[n-1] = arr[n-1];
        for(int i = n-2;i>=0;i--) {
            while(mins.size() > 0 && arr[i] <= arr[mins.back()]) {
                mins.pop_back();
            }
            if(mins.size() == 0) {
                ans[i] = (1LL*arr[i]*(n-i))%MOD;
            } else {
                ans[i] = (ans[mins.back()] + ((mins.back() - i)*arr[i])%MOD)%MOD;
            }
            mins.push_back(i);
        }
        long long sum = 0;
        for(int num : ans) {
            sum = (sum + num)%MOD;
        }
        return sum;
    }
};