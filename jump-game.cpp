// recursive memorization
class Solution {
    vector<int> memo;
public:
    bool canJump(vector<int>& nums) {
     
         memo.assign(nums.size(),-1);
      return solve(0,nums);
        
    }
    
    bool solve(int i,vector<int> nums){
        
        if(i==nums.size()-1) return true;
        if(memo[i]!=-1) return memo[i];
        int reachable=i+nums[i];
        
        for(int k=i+1;k<=reachable;k++){
            
            if(solve(k,nums)){
                return memo[i]=true;
            }
            
        }
        
        return memo[i]=false;
    }
};
