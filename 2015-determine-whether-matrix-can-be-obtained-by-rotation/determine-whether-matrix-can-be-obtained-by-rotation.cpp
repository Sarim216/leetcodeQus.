class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n = target.size();
    bool ans;
    
    if(mat == target){
        ans = true;
        }
        else{
            int count;
                for(int r =1; r<=3;r++){
                    count = 0 ;
                    vector<vector<int>>result(n,vector<int>(n,0));
                    
                        for(int i=0;i<n;i++){
                            for(int j=0;j<n;j++){
                                result[i][j] = mat[j][n-i-1];
                                if(result[i][j]==target[i][j]){
                                    count++;
                                }
                            }
                            
                        }
                        mat = result;
                        if(count==(n*n)){
                            ans = true;
                            break;
                        }
                } 
                if(count!=(n*n))
                {
                    ans = false;
                }
            
        }
            return ans;      
    }
};