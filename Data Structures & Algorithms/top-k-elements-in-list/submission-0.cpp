class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        typedef pair<int,int>p;
        priority_queue<p,vector<p>,greater<p>>pq;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            int freq=it.second;
            int value=it.first;
            pq.push({freq,value});
        }
        while(pq.size()>k){
            pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
