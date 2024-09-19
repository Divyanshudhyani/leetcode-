class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;

        stack<char> Myst;
        for (char c : s) {
            if (c == '(') {
                Myst.push(c);
            } else if (c == ')') {
                Myst.pop();
            }
            
            ans = max(ans, (int)Myst.size());
        }
        
        return ans;
    }
};