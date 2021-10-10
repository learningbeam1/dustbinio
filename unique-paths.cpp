class Solution {
public:
    //Time: O(m*n), Space: O(m*n)
    int countPath(int x, int y, int m, int n, vector<vector<int>>& memo){
        if(x >= m || y >= n) return 0;
        
        if(x == m-1 && y == n-1) return 1;
        
        if(memo[x][y] != -1) return memo[x][y];
        
        memo[x][y] = countPath(x+1, y, m, n, memo) + countPath(x, y+1, m, n, memo);
        return memo[x][y];
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1));
        return countPath(0, 0, m, n, memo);
    }
};
