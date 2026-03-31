class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> row(10,0);
        
        for( int i=0;i<9;i++){
            for( int j=0;j<9;j++){
                if(isdigit(board[i][j])){
                    int intg1=board[i][j]-'0';
                
                    if(row[intg1]==1 ){
                        return false;
                    }
                    else{
                        row[intg1]=1;
                }
            }
        }
        row.assign(10,0);
    }

        
        for( int i=0;i<9;i++){
            for( int j=0;j<9;j++){
                if(isdigit(board[j][i])){
                    
                    int intg2=board[j][i]-'0';
                    if(row[intg2]==1 ){
                        return false;
                    }
                    else{
                        row[intg2]=1;
                       
                    }
                }
            }
            row.assign(10,0);
        }
        
        for( int i=0;i<=6;i=i+3){
            for( int j=0;j<=6;j=j+3){
                int k=0;
                row.assign(10,0);
                while(k<3){
                    int l=0;
                    while(l<3){
                    if(isdigit(board[i+k][j+l])){
                        int init=board[i+k][j+l]-'0';
                        if(row[init]==1){
                            return false;
                        }
                        else{
                            row[init]=1;
                        }
                    }
                  
                    l++;
                  }
                  k++;
                }
                 
            }
        }
        return true;

    }
};
