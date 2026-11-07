class Solution {
public:
    int trap(vector<int>& height) {
// solution must be O(n) time complexity so the result must be found in one go
//the idea is to use two opposite ends pointers left and right 
//the condition that control moving either pointers is comparing heights
//the water level is the min of heights of two pointers 
//when either pointers move upon an area if its height less than water level it must be filled 
        int right = height.size()-1 ; 
        int left = 0 ;
        int water_level=0 ;
        int max_water_level=min(height[left],height[right]) ; 
        int water_amount=0 ;
        int moved=0 ;

        while(left<right){
             water_level=min(height[left],height[right]);
             if(water_level>max_water_level){
                max_water_level=water_level ;
             }
           
            if(height[moved]<max_water_level){
                water_amount+= (max_water_level-height[moved]);
            }
            if(height[left]<height[right]){
                left++;
                moved=left ;
            }else{
                right-- ; 
                moved=right ;
            }

            
        }
        return water_amount ;  


    }
};
