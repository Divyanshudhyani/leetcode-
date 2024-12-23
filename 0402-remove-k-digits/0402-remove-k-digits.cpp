class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;

        // Iterate through each digit in the number
        for (int i = 0; i < n; i++) {
            // Remove elements from the stack if the current digit is smaller
            // than the stack's top and we still have removals left
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]); // Push the current digit
        }

        // Remove remaining digits if k > 0
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Build the result from the stack
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        // Reverse the result string as stack gives reversed order
        reverse(result.begin(), result.end());

        // Remove leading zeros
        while (result.size() > 0 && result[0] == '0') {
            result.erase(result.begin());
        }

        // If the result is empty, return "0"
        return result.empty() ? "0" : result;
    }
};