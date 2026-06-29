//You are given an m x n integer matrix matrix with the following two properties:
//
//Each row is sorted in non-decreasing order.
//The first integer of each row is greater than the last integer of the previous row.
//Given an integer target, return true if target is in matrix or false otherwise.
//
//You must write a solution in O(log(m * n)) time complexity.
//
// 

class Solution {
public:
    bool search(vector<vector<int>>& matrix,int target,int row){
        int m=matrix[0].size();
        int st=0,end=m-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(matrix[row][mid]==target){
                return true;
            }
            else if(target>matrix[row][mid]){
                st=mid+1;

            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int startRow=0,endRow=m-1;
        while(startRow<=endRow){
            int midRow=startRow+(endRow-startRow)/2;
             if(target>=matrix[midRow][0] && target<=matrix[midRow][n-1]){
                return search(matrix,target,midRow);
             }
             else if(target>=matrix[midRow][n-1]){
                startRow=midRow+1;
             }
             else{
                endRow=midRow-1;
             }
        }
    return false;
    }
};
