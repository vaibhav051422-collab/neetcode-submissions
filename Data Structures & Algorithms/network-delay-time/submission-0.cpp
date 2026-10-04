class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // so in this we basically need to return the max from the distance aray of djikstra
        vector<vector<pair<int,int>>>adj(n+1);
        int ans=INT_MIN;
        for(auto& p: times){
            int u=p[0];
            int v=p[1];
            int wt=p[2];
            adj[u].push_back({v,wt});
    }

            vector<int>dist(n+1,INT_MAX);
              priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
              pq.push({0,k});
              dist[k]=0;
              while(!pq.empty()){
                int node=pq.top().second;
                int d=pq.top().first;
                pq.pop();

              
              for(auto it:adj[node]){
                int adjnode=it.first;
                int edgew=it.second;
                if(d+edgew<dist[adjnode]){
                    dist[adjnode]=d+edgew;
                    pq.push({dist[adjnode],adjnode});
                }

              }
              }
              for(int i=1;i<=n;i++){
                if(dist[i]==INT_MAX) return -1;
                ans=max(ans,dist[i]);

              }
              return ans;
        

        
        
    }
};