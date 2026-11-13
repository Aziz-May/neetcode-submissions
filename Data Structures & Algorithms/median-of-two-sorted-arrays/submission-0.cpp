class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { 
        int n = nums1.size() ;
        int m = nums2.size() ;
         
        if (n > m) {
            swap(nums1, nums2);   // now nums1 is the smaller array 
             swap(n, m);
            }
        int half = (m+n+1)/2 ;
        int right = nums1.size();
        int left =0 ; 
        int mid = 0 ;
        int comp=0;
        double median =0 ;
        // [x0, x1 , x2 ,x3 ,x4 , x6 ,x7 , x12]  // 8
        //  [x5, x8, x9 , x10 , x11]      // 5    // half  6
        while(left<=right){
             mid=left+(right-left)/2; // mid is the number x of elemnt took from array A 
             comp= half - mid ;
             //INT_MIN & INT_MAX help us to control edge cases 
             //when we take 0 element from A there are no element from A to compare them with elements from B so we use int_min which is the most small integer value && vice versa 
             
             int leftA  = (mid == 0) ? INT_MIN : nums1[mid - 1]; 
             int rightA = (mid == n) ? INT_MAX : nums1[mid];
             int leftB  = (comp == 0) ? INT_MIN : nums2[comp - 1];
             int rightB = (comp == m) ? INT_MAX : nums2[comp];
             if(max(leftA , leftB)<=min(rightA,rightB)){  // this is the valid partition
                 if((m+n)%2==0){
                    median = (double)(max(leftA,leftB)+min(rightA,rightB))/2;
                 }else{
                    median = max(leftA , leftB);
                 }
                 return median ; 
             }else if(leftB>rightA) {  //we took very few element from A we need to take more 
                left=mid+1;
               
             }else{  // we took a lot of element from A we need to take less
                right=mid-1;
             }




        }return median;
        


        
    }
};
