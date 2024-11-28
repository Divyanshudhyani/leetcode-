class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0; 
        
        int i = 0;         
        int j = n - 1;     
        int leftMax = 0;    
        int rightMax = 0;  
        
        int water_collection = 0;
        
        while (i <= j) {
            if (height[i] <= height[j]) {
                if (height[i] >= leftMax) {
                    leftMax = height[i];
                } else {
                    water_collection += leftMax - height[i];
                }
                i++;
            } else {
                if (height[j] >= rightMax) {
                    rightMax = height[j];
                } else {
                    water_collection += rightMax - height[j];
                }
                j--;
            }
        }
        return water_collection;
    }
};
