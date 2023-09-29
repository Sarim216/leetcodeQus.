class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> M(n,vector<int>(n));
        int start = 1;
        int temp;
        int i=0;
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        while(top<=bottom && left<=right){
           if(top<=bottom && left<=right){
                for(int j = left; j <= right;j++){
                    M[top][j] = start;
                    start++;
                }
            }
            top++;
            if(top<=bottom && left<=right){
                for(int k = top; k <= bottom; k++ ){
                    M[k][right] = start;
                    start++;
                }
            }
            right--;
           /* if(top<=bottom && left<=right){
                for(int l = right; l>=left; l--){
                    M[l][bottom] = start;
                    start++;
                }
            }*/
            if(top<=bottom && left<=right){
            for(int l = right; l >= left; l--){   //for last row
                M[bottom][l] = start;
                start++;
            }
        }
            bottom--;
            if(top<=bottom && left<=right){
                for(int m = bottom; m >= top; m--){
                    M[m][left] = start;
                    start++;
                }
            }
            left++;
            
            
        }
        return M;
        
    }
};