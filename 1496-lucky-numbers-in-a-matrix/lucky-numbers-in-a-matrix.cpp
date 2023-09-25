class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        //for row min
        for(int i=0;i<n;i++){
            int min = matrix[i][0];
            for(int j = 1 ; j<m;j++){
                if(matrix[i][j]<min){
                    min = matrix[i][j];
                }
               
            }
             row.push_back(min);
        }
        // for column max 
         for(int i=0;i<m;i++){
            int max = matrix[0][i];
            for(int j = 0 ; j<n;j++){
                if(matrix[j][i]>max){
                    max = matrix[j][i];
                }
                
            }
            col.push_back(max);
        } 
        //for compare
         for(int i=0;i<row.size();i++){
            
            for(int j = 0 ; j<col.size();j++){
                if(row[i] == col[j]){
                    ans.push_back(col[j]);
                
                }
                
               
            }
        } 
        return ans;   
    }
};