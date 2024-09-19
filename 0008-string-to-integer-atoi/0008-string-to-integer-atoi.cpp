class Solution {
public:
    int myAtoi(string s) {
        string st;
        int p=0;
        for(char t:s){
            if(t==' '&&p>=1) break;
            
            if(t!=' '){
                st+=t;
                p++;
            }
        }
         
        int start=0;
        bool isNeg=false;
        if(st[0]=='-'||st[0]=='+'){
            if(st[0]=='-') isNeg=true;
            start=1;
        } 
        
        string str;
        for(int i=start;i<st.size();i++){
                         if(st[i]=='0'||st[i]=='1'||st[i]=='2'||st[i]=='3'||st[i]=='4'||st[i]=='5'||st[i]=='6'||st[i]=='7'||st[i]=='8'||st[i]=='9'){
                str+=st[i];
            }
            else break;
        }

        
        long long num=0;
        for (int i =0; i < str.length(); i++) {
            int digit=str[i]-'0';
            if (num>(INT_MAX-digit)/10) return(isNeg) ? INT_MIN:INT_MAX;
            num = num * 10 + digit;
        }

        
        return (isNeg)?num*(-1):num;
    }
};