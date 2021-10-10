class Solution {
    vector<int> memo;
public:
    bool canJump(vector<int>& nums) {
     
        int n=nums.size();
        vector<int> dp(n,0);
        
        dp[0]=true;
        
        for(int i=1;i<n;i++){
            
             for(int j=0;j<i;j++){
                 if(dp[j] && j+nums[j]>=i){
                     dp[i]=true;
                     break;
                 }
                     
             }          
            
        }
        
        return dp[n-1];
        
    }
};
