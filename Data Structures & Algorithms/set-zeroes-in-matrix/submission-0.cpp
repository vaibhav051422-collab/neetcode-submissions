class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<pair<int,int>>zeros;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    zeros.push_back({i,j});
                }
            }
        }
        for(auto [i,j]:zeros){
            for(int r=i;r>=0;r--){
                matrix[r][j]=0;
            }
            for(int r=i;r<n;r++){
                matrix[r][j]=0;
                
                    
                
            }
            for(int c=j;c>=0;c--){
                matrix[i][c]=0;
            }
            for(int c=j;c<m;c++){
                matrix[i][c]=0;
            }
        }

        
        
    }
};