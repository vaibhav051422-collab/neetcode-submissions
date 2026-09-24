class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()){
            return 0;
        }
        int cnt=1;
        int ans=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
                cnt++;
            }
            else{
                cnt=1;
            }
            ans=max(ans,cnt);

        }
        return ans;
        

    }
};
