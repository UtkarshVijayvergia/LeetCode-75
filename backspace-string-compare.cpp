class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1 = "";
        string str2 = "";
        
        int n1 = s.length();
        int n2 = t.length();
        
        int hashCounter = 0;
        
        for(int i=n1-1;i>=0;i--){
            if(hashCounter>0 && s[i]!='#'){
                hashCounter--;
            }
            else if(s[i] == '#'){
                hashCounter++;
            }
            else{
                str1 += s[i];
            }
        }
        
        hashCounter = 0;
        for(int i=n2-1;i>=0;i--){
            if(hashCounter>0 && t[i]!='#'){
                hashCounter--;
            }
            else if(t[i] == '#'){
                hashCounter++;
            }
            else{
                str2 += t[i];
            }
        }
      
        int n = str1.length();
        if(n!=str2.length()){
            return false;
        }
        for(int i=0;i<n;i++){
            if(str1[i]!=str2[i]){
                return false;
            }
        }
        return true;
    }
};
