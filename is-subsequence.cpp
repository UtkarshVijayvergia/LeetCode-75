class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.length()==0){
            return true;
        }
        
        for(int i=0,j=0;j<t.length();j++){
            if(s[i]==t[j]){
                i++;
            }
            if(j==t.length()-1){
                if(i==s.length()){
                    cout<<i<<endl;
                    return true;
                }
                else{
                    cout<<i<<endl;
                    return false;
                }
            }
            cout<<"forrr"<<endl;
        }
        return false;
    }
};
