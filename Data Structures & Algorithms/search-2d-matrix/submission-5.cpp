class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        if(target<matrix[0][0] || target>matrix[row-1][col-1]){
            return false;
        }
        for( int i=0;i<row;i++){
            if(target>=matrix[i][0] && target<=matrix[i][col-1]){
                
                int low=0;
                int high=col-1;
                int mid;
                while(low<=high && target>=matrix[i][low] && target<=matrix[i][high]){
                    if(low==high){
                        if(target==matrix[i][low]){
                            return true;
                        }
                        else{
                            break;
                        }
                    }
                    if(matrix[i][low]==matrix[i][high] && target!=matrix[i][low]){
                        return false;
                    }
                    if(target==matrix[i][low] || target==matrix[i][high]){
                        return true;
                    }
                    mid=low + ((target - matrix[i][low]) * (high - low)) / (matrix[i][high] - matrix[i][low]);
                    // mid=(low+high)/2;
                    if(target<matrix[i][mid]){
                        high=mid-1;
                    }
                    else if(target>matrix[i][mid]){
                        low=mid+1;
                    }
                    else{
                        return true;
                    }
                }
                break;
            }
        }
        return  false;
    }
};
