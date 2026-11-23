class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);

        for(int i=0;i<board.size();i++){
            unordered_set<int> row;
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='.')
                    continue;
                int box_l= (i/3)*3+j/3;
                 if(box[box_l].count(board[i][j]) || col[j].count(board[i][j]) || row.count(board[i][j])){
             return false;
                }
                row.insert(board[i][j]);
               
                col[j].insert(board[i][j]);
                box[box_l].insert(board[i][j]);
            }
            row.clear();
        }
        return true;
    }
};
