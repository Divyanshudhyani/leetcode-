class Solution {
public:
    int maxArea(vector<int>& height) {
        int r = height.size()-1; // r = right
        int l = 0 ;   // l = left
        int maxi = 0 ;
        
        while(l < r){
            int lh = height[l];
            int rh = height[r];
            int min_h = min(lh,rh);
            int len = r-l;
            int curr_area = min_h * len;
            maxi = max(maxi,curr_area);
            if(lh < rh) l++;
            else r--;
        }
        return maxi;
        
    }
};