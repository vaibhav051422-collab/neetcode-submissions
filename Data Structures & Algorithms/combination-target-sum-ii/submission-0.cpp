class Solution {
public:
//start se to hum check kr rhe ki kon se index ka element jutha rha
void backtrack(vector<int>& candidates, int target,vector<int>&path,vector<vector<int>>&ans,int start){
    if(target==0){
        ans.push_back(path);
        return ;
    }
    
        
for(int i=start;i<candidates.size();i++){
    if(candidates[i]>target){
        break;
    }
    if(i>start&&candidates[i]==candidates[i-1]){
        continue;
    }
    path.push_back(candidates[i]);
    backtrack(candidates,target-candidates[i],path,ans,i+1);
    path.pop_back();


}
       
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>path;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,path,ans,0);
        return ans;
        
    }
};
