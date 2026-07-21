class Solution {
public:
    //validate sudoku(row, col)
        // row check -> for col 0-9
            //check matrix[row][var] distinct
        // col check -> for row 0-9
            //check matrix[var][col] distinct
        // 3x3 check 
            // for i in row
                //for j in col
                    //matrix[i][j] distinct
    
    bool rowCheck(int row,  vector<vector<char>> matrix){
        map<char,int> row_check;
        for(int i =0;i<9;i++){
            if(matrix[row][i]!='.'){
                    row_check[matrix[row][i]]++;
            } 
            if(row_check[matrix[row][i]]>1){
                cout<<"Row "<<row<<" "<<i<<endl;
                return false;
            }
        }
        return true;
    }

    bool colCheck(int col,  vector<vector<char>> matrix){
        map<char,int> col_check;
        for(int j =0;j<9;j++){
            if(matrix[j][col]!='.'){
                    col_check[matrix[j][col]]++;
            } 
            if(col_check[matrix[j][col]]>1){
                cout<<"Col "<<j<<" "<<col<<endl;
                return false;
            }
        }
        return true;
    }

    bool validateElement(int row,int col,vector<vector<char>> matrix){
        map<char,int> mat_check;
        for(int i = row;i<row+3;i++){
            if(rowCheck(i,matrix)==false){
                return false;
            }
        }
        for(int i = col;i<col+3;i++){
            if(colCheck(i,matrix)==false){
                return false;
            }
        }
        for(int i =row; i<row+3; i++){
            for(int j=col; j<col+3; j++){
                if(matrix[i][j]!='.'){
                    mat_check[matrix[i][j]]++;
                }
                if(mat_check[matrix[i][j]]>1){
                    cout<<"Mat "<<i<<" "<<j<<endl;
                    return false;
                }
            }
        }
        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(this->validateElement(i,j,board)==false){
                    return false;
                }
            }
        }
        return true;
    }
};
