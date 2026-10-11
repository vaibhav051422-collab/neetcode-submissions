class Solution {
public:
int maxelement(vector<int>&piles){
    //jo max speed hogi vo array k andr jo max elelmt h utni hi hoskti hai
    int maxe=INT_MIN;
    for(int i=0;i<piles.size();i++){
        maxe=max(maxe,piles[i]);
    }
    return maxe;
}
long long calhours(vector<int>&piles,int k,int h){
 long long totalhours=0;
    for(int i=0;i<piles.size();i++){
        totalhours+=piles[i]/k;
        if(piles[i]%k!=0){
            totalhours++;
        }
         }
         return totalhours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
      int left=1;  
      int right=maxelement(piles);
      while(left<=right){
        int mid=left+(right-left)/2;
        //
        long long ans=calhours(piles,mid,h);
        if(ans<=h){
            right=mid-1;
        }
        else{
            left=mid+1;
        }


      }
      return left;
        

        
    }
};