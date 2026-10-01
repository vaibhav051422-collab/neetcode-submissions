class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,double>>cars;
        for(int i=0;i<n;i++){
            double time=(double)(target-position[i])/speed[i];
            cars.push_back({position[i],time});
        }
        sort(cars.begin(),cars.end(),greater<pair<int,double>>());
        stack<double>st;
        for(auto&p:cars){
            double time=p.second;
            while(st.empty()||time>st.top()){
                st.push(time);
            }

        }
        return st.size();

        
    }
};
