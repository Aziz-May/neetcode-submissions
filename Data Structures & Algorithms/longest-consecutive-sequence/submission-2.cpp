class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set <int> nums_set(nums.begin(),nums.end()) ; 
       int seq=0 ,max_seq=0;
       int k =0 ;
       for(int i =0 ; i<nums.size();i++){
        k=0;
        if(!nums_set.contains(nums[i]-1)){
             while(nums_set.contains(nums[i]+k)){
                k++;
                
            }
            seq=k;
            
           
        }
        if(seq>max_seq){
            max_seq=seq; 
        }
           
            
        
           
       }
       return max_seq;
    }
};
