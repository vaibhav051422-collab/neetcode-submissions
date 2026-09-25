class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>strr;
        for(char x:s){
            if(isalnum(x)){
                strr.push_back(tolower(x));

            }
        }
        int n=strr.size();
        int l=0;
        int r=strr.size()-1;
        while(l<r){
            if(strr[l]==strr[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
        

    }
};
