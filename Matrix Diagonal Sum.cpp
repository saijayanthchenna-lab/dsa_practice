//Given a square matrix mat, return the sum of the matrix diagonals.
//
//Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows=mat.size();
        int sum=0;
        int cols=mat[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(i==j){
                    sum+=mat[i][j];
                }
                else if(j==rows-i-1){
                    sum+=mat[i][j];

                }
            }

        }
        return sum;
        
    }
};
