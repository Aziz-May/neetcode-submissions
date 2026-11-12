class Solution {
public:
    int findMin(vector<int> &nums) {
        // the first element in the array that is  <mid+1 and <mid-1 at the same time
        //[4,5,6,7]
        // [9,10,11,0,1,2,3,4,5,6,7,8] 
        int left = 0 ; 
        int right = nums.size()-1;
        int mid=0 ; 
        while(left<right){
            mid=left+(right-left)/2;
            if(nums[mid]>=nums[right]){//&&nums[mid]>=nums[left]){
                left = mid+1;
                
            }else{right = mid;}
             
            
            
        }
        return nums[left] ;
        
    }
};
