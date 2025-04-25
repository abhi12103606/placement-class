class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> prev(n), curr(n);
        
        for(int i=0; i<n;i++){
            prev[i]=matrix[0][i];
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int s=matrix[i][j] + prev[j];
                int dl=matrix[i][j] + (j>0?prev[j-1]:1e9);
                int dr = matrix[i][j]+(j+1<n?prev[j+1]:1e9);
                curr[j]=min(s,min(dl,dr));
            }
            prev=curr;
        }
        int result=1e9;
        for(int i=0;i<n;i++){
            result=min(result,prev[i]);
        }
        return result;
    }
};