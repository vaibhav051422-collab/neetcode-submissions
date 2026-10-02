class Solution {
public:
void backtrack(vector<int>&nums,int target, vector<int>&path,vector<vector<int>>&ans,int index){
    if(index==nums.size()){
        if(target==0){
            ans.push_back(path);
        }
        return ;
    }

    if(nums[index]<=target){
        path.push_back(nums[index]);
        backtrack(nums,target-nums[index],path,ans,index);
        path.pop_back();

    }
    backtrack(nums,target,path,ans,index+1);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>path;
        vector<vector<int>>ans;
        backtrack(nums,target,path,ans,0);
        return ans;

        
    }
};
