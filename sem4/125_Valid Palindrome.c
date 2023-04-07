// Recursive method which had TLE error:
class Solution {
public:
    bool ispalin(string s,int i,int len){
        if(i==len/2){
            return true;
        }
        if(s[i]!=s[len-i-1]){
            return false;
        }
        return ispalin(s,i+1,len);
    }
    bool isPalindrome(string s) {
        size_t i = 0;
        size_t len = s.length();
        while(i < len){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
                //i++;
            }
            if ((!isalnum(s[i]) )|| s[i] == ' '){
            s.erase(i,1);
            len--;
            }
            else
                i++;
        }
        i=0;
        return ispalin(s,i,len);   
    }
};

//iterative method with high runtime
class Solution {
public:
    bool isPalindrome(string s) {
        size_t i = 0;
        size_t len = s.length();
        while(i < len){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
            if ((!isalnum(s[i])) || s[i] == ' '){
                s.erase(i,1);
                len--;
            } else {
                i++;
            }
        }
        i = 0;
        len = s.length();
        while(i < len/2) {
            if(s[i]!=s[len-i-1]){
                return false;
            }
            i++;
        }
        return true;
    }
};
/* String functions learnt
isupper,isalnum,tolower() */
