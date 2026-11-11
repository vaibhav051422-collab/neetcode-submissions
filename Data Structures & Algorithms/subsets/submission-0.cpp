class Solution {
public:
void subseq(int index,vector<int>&nums,vector<int>&ans,vector<vector<int>>&final){
    if(index>=nums.size()){
        final.push_back(ans);
        return ;
    }
         

         ans.push_back(nums[index]);
         subseq(index+1,nums,ans,final);
         ans.pop_back();
         subseq(index+1,nums,ans,final);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>final;
        subseq(0,nums,ans,final);
        return final;

        
    }
};