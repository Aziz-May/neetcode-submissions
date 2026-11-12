class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int right = nums.size()-1; 
        int left = 0 ;
        int mid=0;
        while(left<=right){
            mid= left + (right-left)/2; 
            if(nums[mid]==target){
                return mid ;
            }else if(nums[mid]<nums[right]){ // right is sorted 
                        if (nums[mid]<=target && target <=nums[right]){
                        left=mid+1;// because the element cannot exists in the sorted right
                        }else{
                        right=mid-1;
                        }
            }
                        

            else{ //right not sorted => left sorted
                        if(nums[mid]>=target && target>=nums[left]){
                            right = mid-1 ; 
                        }else{
                            left=mid+1;
                        }
                
                }

        }
        return -1 ;

    
    }
};
