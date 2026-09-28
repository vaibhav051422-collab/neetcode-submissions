class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int cnt=0;
        
        int left=0;
        unordered_map<char,int>mp;
         for(char c:s1){
            mp[c]++;

         }
        for(int right=0;right<s2.size();right++){
            if(mp[s2[right]]>0){
                cnt++;
            }
            mp[s2[right]]--;
            while(right-left+1>s1.size()){
                mp[s2[left]]++;
                if(mp[s2[left]]>0){
                    cnt--;
                }
                left++;
            }
            if(cnt==s1.size()){
                return true;
            }
        }
        return false;
        
    }
};
