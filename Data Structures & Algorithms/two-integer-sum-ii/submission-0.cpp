class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // a two pointer problem in a sorted array 
        // so left + rigth must be equal to target 
        // if left+ right < target  then left must increase 
        //if left + right > target then right must decrese 
        int left = 0 ; int right = numbers.size()-1 ; 
        vector<int> output ; 
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                output.push_back(left+1);
                output.push_back(right+1);

                return output ; 
            }else if(numbers[left]+numbers[right]<target){
                left ++ ; 
            }else{
                right--;
            }
        }
        return {} ;
    }
};
