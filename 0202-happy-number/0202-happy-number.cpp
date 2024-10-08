class Solution {
public:
    
    bool isHappy(int n) {
        if(n<=0)
            return false;
        
        unordered_set<int> cache;
        while(cache.find(n) == cache.end()){
            cache.insert(n);
            n = sum_of_square(n);
            if(n==1)
                return true;
        }
        return false;
    }
    
    int sum_of_square(int num){
        int sum = 0;
        while(num){
            int d = num%10;
            sum += d*d;
            num /= 10;
        }
        return sum;
    }
};