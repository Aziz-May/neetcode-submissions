class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> productAfter , productBefore ,productExceptSelf ; 
        productBefore.push_back(1) ;
        productAfter.push_back(1)  ;
        int product_before = 1 ;
        int product_after =1 ;
        for (int i=1 ; i<nums.size() ; i++){
            product_before*=nums[i-1] ;
            productBefore.push_back(product_before);
        }
        for(int j=nums.size()-2 ; j>=0 ; j--){
            product_after*=nums[j+1];
            productAfter.push_back(product_after) ;
        }
        for(int k =0 ; k<productBefore.size();k++){
            productExceptSelf.push_back(productAfter[productBefore.size()-1-k]*productBefore[k]);
        }
        return productExceptSelf ;
    }

    
};
