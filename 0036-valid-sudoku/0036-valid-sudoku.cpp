class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char curr = board[i][j];
                if(curr != '.'){
                    board[i][j] = '.';
                    if(!helper(board,i,j,curr)) return false;
                    board[i][j] = curr;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board,int i,int j,char ch){
        for(int k = 0; k < 9; k++){
            if(board[i][k] == ch || board[k][j] == ch) return false;
        }
        int x = i/3*3;
        int y = j/3*3;
        for(i = x; i < x+3; i++){
            for(j = y; j < y+3;j++){
                if(board[i][j] == ch) return false;
            }
        }
        return true;
    }
};