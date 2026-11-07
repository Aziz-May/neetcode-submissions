class Solution {
public:
    int maxArea(vector<int>& heights) {
// the max area is the max of all (j-i)*min(hi,hj))
//the solution must be O(n) in time therefore we r gonna use two pointers 
//opposite end pointers left and right 
//[1,7,2,5,4,7,3,6] 
//we compare the heights of left and right . where we should move ?
// keeping the min height and moving the other pointer could never increase the area
//so we should move in the direction that can maximize the area
//in other words fix the max height and move the pointer pointing to the lower one 

        int n = heights.size() ; 
        int left= 0 ; int right = n-1 ;
        int max_area =0 ;
        int current_area ;
        while(left<right){
            current_area = (right-left)*min(heights[left], heights[right]) ; 
            if(current_area>= max_area){
                max_area=current_area;
            }
            if(heights[right]<heights[left]){
                right--;
            }else{
                left++ ;
            }

            
        
        }
        return max_area ;
    }
};
