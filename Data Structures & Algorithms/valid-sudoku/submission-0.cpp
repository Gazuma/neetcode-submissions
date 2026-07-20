class Solution {
public:

    bool solveCube(int row, int col, vector<vector<char>>& board){
        map<int,int> freq;
        for(int i = row; i< row+3; i++){
            for (int j = col; j<col+3; j++){
                if(freq[board[i][j]] && board[i][j]!='.'){
                    cout<<"found "<<board[i][j]<<endl;
                    return false;
                }
                freq[board[i][j]]++;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        //row & column validate
        for(int i = 0; i<9; i++){
            map<int,int> row_map;
            map<int,int> col_map;
            for(int j = 0; j<9; j++){
                if(board[i][j]!='.'){
                    if(row_map[board[i][j]]){
                    cout<<"found duplicate row "<<i<<" "<<board[i][j]<<endl;
                    return false;
                    }
                }
                if(board[j][i]!='.'){
                if(col_map[board[j][i]]){
                    cout<<"found duplicate col"<<j<<" "<<board[j][i]<<endl;
                    return false;
                }
                }
                row_map[board[i][j]]++;
                col_map[board[j][i]]++;
                }
            }

        for(int i = 0;i<9; i+=3){
            for(int j=0;j<9;j+=3){
                if(solveCube(i,j,board)==false){
                    return false;
                }
            }
        }

        return true;
    }
};
