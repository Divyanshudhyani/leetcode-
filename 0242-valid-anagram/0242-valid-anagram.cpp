class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int> MyMap;
       int n = s.size();
       if(s.size()!=t.size()){
           return false;
       }
       for(int i = 0 ; i < n ; i++){
           MyMap[s[i]]++;
       }
       
       for(int i = 0 ; i <  n ; i++){
           MyMap[t[i]]--;
       }
        
      for(auto it : MyMap){
         if(it.second != 0){
             return false;
         }
      }
      
      return true;
    }
};