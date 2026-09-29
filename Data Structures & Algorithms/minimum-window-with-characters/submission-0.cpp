class Solution {
public:
    string minWindow(string s, string t) {
        int left=0;
        int minlen=INT_MAX;

        int cnt=0;
        int startindex=-1;
        unordered_map<char,int>mp;
        for(char c:t){
            mp[c]++;
        }
        for(int right=0;right<s.size();right++){
            if(mp[s[right]]>0){
                cnt++;
            }
            mp[s[right]]--;
            while(cnt==t.size()){
                if(minlen>right-left+1){
                    minlen=right-left+1;
                    startindex=left;

                }
                mp[s[left]]++;
                if(mp[s[left]]>0){
                    cnt--;
                }
                left++;
            }

            
            

            


            
        }
        if(startindex==-1){
            return "";
        }
        return s.substr(startindex,minlen);


        
    }
};
