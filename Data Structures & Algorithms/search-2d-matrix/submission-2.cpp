class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //the idea is to treat the matrix as one flatten array 
        //[[1,2,4,8],[10,11,12,13],[14,20,30,40]] 
        // [1,2,4,8 / 10,11,12,13 / 14,20,30,40]
        //  0 1 2 3   4  5  6  7    8  9  10  11 those are the indexes
        //as we can see the index of each element in the new array is : 
        // index = row*m +col   where m is the number of columns in the matrix 
        // the reverse formula is  row = index/m && col = index%m
        //now we apply the normal binary search 
        int m=matrix[0].size();
        int n = matrix.size() ; 
        int index=0 ; 
        int left = 0 ; 
        int right = n*m-1 ;
        while(left <= right){
            
            index=left+(right-left)/2;
            if(matrix[index/m][index%m]==target){
                return true;
            }else if (matrix[index/m][index%m]<target){
                left = index+1 ;
                
            }else{
               right = index-1 ;
            }

        }
        return false ; 
    }
};
