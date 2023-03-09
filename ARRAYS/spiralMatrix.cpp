// Given an m x n matrix, return all elements of the matrix in spiral order.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int>ans;

        int rows= matrix.size();
        int cols= matrix[0].size();
        int total= rows*cols;

        int startrow=0;
        int endcol= cols-1;
        int endrow= rows-1;
        int startcol=0;


        int count=0;
        while(count<total){

            //PRINTING START ROW
            for(int i =startcol; i<=endcol && count<total; i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;

            //PRINTING END COLUMN
            for(int i =startrow; i<=endrow && count<total; i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;

            //PRINTING END ROW
            for(int i =endcol; i>=startcol && count<total; i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;

            //PRINTING START COLUMN
            for(int i =endrow; i>=startrow && count<total; i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;

            }

            return ans;
      
        }
        
};
