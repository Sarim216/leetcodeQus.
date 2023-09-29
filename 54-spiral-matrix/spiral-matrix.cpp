class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top  =  0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        while(top<=bottom && left<=right){
        if(top<=bottom && left<=right){
            for(int i=left ; i <= right; i++){   //for first row
                ans.push_back(matrix[top][i]);
            }
        }
            top++;
        if(top<=bottom && left<=right){
            for(int j = top; j <= bottom; j++){//for last col
                ans.push_back(matrix[j][right]);
            }
        }
            right--;
        if(top<=bottom && left<=right){
            for(int k = right; k >= left; k--){   //for last row
                 ans.push_back(matrix[bottom][k]);
            }
        }
            bottom--;
        if(top<=bottom && left<=right){
            for(int l = bottom; l >= top; l--){
                 ans.push_back(matrix[l][left]);
            }
        }
            left++;
            
        }
        return ans;
    }
};