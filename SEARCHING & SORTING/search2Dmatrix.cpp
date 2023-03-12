/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows= matrix.size();
        int cols= matrix[0].size();

        int s=0;
        int e= rows*cols -1;
        int mid= s + (e-s)/2;

        while(s<=e){
            //FINDING matrix[i][j] using mid value
            int element= matrix[mid/cols][mid%cols];

            if(element == target){
                return true;
            }
            else if( element< target){
                s= mid+1;
            }
            else{
                e= mid-1;
            }

            mid= s + (e-s)/2;
        }

        return false;

        
    }
};
