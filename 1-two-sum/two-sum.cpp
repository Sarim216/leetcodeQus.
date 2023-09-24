class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
       for(int j = 0;j<nums.size()-1;j++){
            for(int i=j+1;i<nums.size();i++){
                
                if( nums[j]+nums[i] == target){
                    ans.push_back(j);
                    ans.push_back(i);
                   
                    break;
                }

            }
            
       }
        return ans;
      
    }
};