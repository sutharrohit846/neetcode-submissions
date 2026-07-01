class Solution {
public:
bool checker(int i,int j,vector<vector<char>>& board){
     vector<int>a(10,0);
     for(int r=i;r<min(i+3,9);r++){
        for(int c=j;c<min(j+3,9);c++){
            if(board[r][c]!='.'){
                a[board[r][c]-'1']++;
            }
        }
     }
    for(auto it:a){
        if(it>1){
            return false;
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            vector<int>a(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    a[board[i][j]-'1']++;
                }
            }
            for(auto it:a){
                if(it>1)return false;
            }
        }

          for(int i=0;i<9;i++){
            vector<int>a(10,0);
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    a[board[j][i]-'1']++;
                }
            }
            for(auto it:a){
                if(it>1)return false;
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(!checker(i,j,board)){
                    return false;
                }

            }
        }
        return true;

        
    }
};
