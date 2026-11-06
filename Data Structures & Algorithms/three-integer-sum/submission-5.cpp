class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //first idea is to sort the vector that's nlogn time complexity 
       // [-4 , -2 ,-2 ,0 , 1 , 2 , 2 ,4 ] 
    // the idea is pretty much like the 2Sum problem when we fix an element
    //the idea is to fix a number curr  and  find which left + right give us -(curr)
       
        sort(nums.begin() , nums.end() ) ;
         
        vector<vector<int>> output ; 
        int n = nums.size() ;
         
            
            for (int current =0 ; current<n ; current++){
                if (current > 0 && nums[current] == nums[current-1])
                    continue;
                int left = current+1 ; int right = n -1 ;
                while(left < right){
                    vector<int> triplet ;
                    if(nums[left]+nums[right]==-nums[current]){
                        triplet.push_back(nums[left]) ;
                        triplet.push_back(nums[current]) ;
                        triplet.push_back(nums[right]) ;


                        output.push_back(triplet);
                        left ++ ; 
                        right -- ;
                        while (left < right && nums[left] == nums[left-1])
                            left++;

                        while (left < right && nums[right] == nums[right+1])
                            right--;
                       
                    }else if (nums[left]+nums[right]<-nums[current]){
                        left++;
                    }else{
                        right -- ;
                    }
                }
                
                
            }
        
        return output ;
       
    }
};
