class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int , unordered_set<char>> squares ;
        for(int i=0 ; i<board.size();i++){
            unordered_set<char> seen_row;
            unordered_set<char> seen_column ;
            for(int j=0 ; j<board[i].size(); j++){
                if(board[i][j]!='.'){
                    if(seen_row.contains(board[i][j])){
                    return false ;
                }else{
                    seen_row.insert(board[i][j]);
                }
                 if(squares[(i/3)*3+j/3].contains(board[i][j])){
                    return false ;
                 }else{
                    squares[(i/3)*3+j/3].insert(board[i][j]);
                 }

                }
                if(board[j][i]!='.'){
                    if(seen_column.contains(board[j][i])){
                        return false ;
                    }else{
                        seen_column.insert(board[j][i]) ;
                    }
                }
                
               
                


            }

        }
        return true ;
        
        
    }
};
