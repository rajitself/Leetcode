class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRow;
        unordered_set<int> setCol;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    setRow.insert(i);
                    setCol.insert(j);
                }
            }
        }
        for(auto& i : setRow){
            for(int j = 0; j < m; j++){
                matrix[i][j] = 0;
            }
        }
        for(auto& j : setCol){
            for(int i = 0; i < n; i++){
                matrix[i][j] = 0;
            }
        }
    }
};