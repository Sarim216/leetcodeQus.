class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        ans = matrix;
        int n = ans.size();
        for(int i =0; i < n; i++){
            for(int j=0; j < n; j++){
                matrix[i][j] = ans[n-j-1][i];
            }
        }

       
    }  
};