class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size();
      int n=matrix[0].size();

      if(m==0)return false;

      int midIndex,rowInd,colInd;
      int low=0;
      int high=m*n-1;

      while(high>=low){
          midIndex=low+(high-low)/2;
          rowInd=midIndex/n;
          colInd=midIndex%n;
          if(target==matrix[rowInd][colInd]){
              return true;
          }
          else if(target>matrix[rowInd][colInd]){
              low=midIndex+1;
          }
          else{
              high=midIndex-1;
          }

      }
      return false;
    }
};