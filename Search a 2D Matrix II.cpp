//Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
//
//Integers in each row are sorted in ascending from left to right.
//Integers in each column are sorted in ascending from top to bottom.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();

        int r=0,c=m-1;
        while(r<n && c>=0){
            if(target==matrix[r][c]){
                return true;
            }
            else if(target<matrix[r][c]){
                c--;
            }
            else{
                r++;
            }
        }
    return false;
    }
};
