class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        int left=0;
        for(int right=0;right<n;right++){
            pq.push({nums[right],right});

            if(right-left+1==k){
                //imp this while loop
                while(pq.top().second<left){
                    pq.pop();
                }
                ans.push_back(pq.top().first);
                left++;

            }
        }
        return ans;
        



        
    }
};
