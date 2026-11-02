class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> dict ;
        vector<int> v ;
        for(int i =0 ; i<nums.size() ; i++){
            if(dict.contains(nums[i])){
                v.push_back(dict[nums[i]]);
                v.push_back(i) ;
            }
            dict[target-nums[i]]=i ;

            
        }
        return v ;
        
    }
};
