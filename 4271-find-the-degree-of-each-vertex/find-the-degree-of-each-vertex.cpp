class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> gola;
        for (int i=0;i<matrix.size();i++){
            gola.push_back(0);
            for (int j=0;j<matrix.size();j++){
                if (matrix[i][j]==1){
                    gola[i]=gola[i]+1;
                }
            }
        }
        return gola;
    }
};