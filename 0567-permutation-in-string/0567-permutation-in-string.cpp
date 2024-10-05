class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n = s2.size();
        unordered_map<char, int> mp;
        for (auto& e : s1)
            mp[e]++;

        int i = 0, j = 0, cnt = s1.size();

        while (j < n) {
            mp[s2[j]]--;
            if (mp[s2[j]] >= 0)
                cnt--;

            while (cnt == 0) {
                if (j - i + 1 == s1.size())
                    return true;
                mp[s2[i]]++;
                if (mp[s2[i]] > 0)
                    cnt++;
                i++;
            }
            j++;
        }
        return false;  
    }
};