class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
                if(s[i]<'65'||(s[i]>'90'&&s[i]<'97')||s[i]>'122'){
                        i++;
                }
                if(s[j]<'65'||(s[j]>'90'&&s[j]<'97')||s[j]>'122'){
                        j--;
                }
                if(s[i]>='65'&&s[i]<='90'){
                        s[i]=s[i]+'32';
                }
                 if(s[j]>='65'&&s[j]<='90'){
                         s[j]=s[j]+'32';
                 }
                  if(s[i]>='97'&&s[i]<='122'&&s[j]>='97'&&s[j]<='122'){
                        if(s[i]==s[j]){
                                i++;
                                j--;
                        }
                        else{
                                return false;
                        }
                }
        }
            return true;
    }
};