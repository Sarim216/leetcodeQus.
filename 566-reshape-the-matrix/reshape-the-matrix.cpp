class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c,0));
        int i,j;
        int n = mat.size();
        int m= mat[0].size();
        if(n*m != r*c){
            return mat;
        }
        else{
            int row=0;
            int col = 0;
            for(i = 0; i<n;i++){
                for(j=0;j<m;j++){
                   ans[row][col] = mat[i][j];
                   col++;
                   if(col == c){
                       row++;
                       col = 0;
                   }
                   
                }
            }
            
        }
        return ans;
    }
};