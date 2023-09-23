class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> ans(101,0);
        for(int i =0; i<logs.size();i++){
            for(int j = logs[i][0]; j <logs[i][1]; j++){
                ans[j-1950]++;
                  
            }
        }
            int max = 0;
            int year;
            for(int i=0;i<101;i++)
            {
                if(ans[i]>max){
                max = ans[i];
                year = i;
                }
            }
            int a = year + 1950;
    return a;
    }
};