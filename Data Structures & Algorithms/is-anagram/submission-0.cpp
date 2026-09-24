class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        for(char x1:t){
            mp[x1]--;
            if(mp[x1]<0){
                return false;
            }
        }
        return true;

    }
};

