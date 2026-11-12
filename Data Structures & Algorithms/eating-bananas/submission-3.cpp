class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      // since u cannot eat from another pile in the same hour max of k is the largest number in the array 
      // we find the max of piles 
      // binary search on max till we find the minimum k that gives hi > h  (snn pass)
      // rate = k (6)
      // [3,6,7,11]    
      //  1 1 2  2
        
      int n = piles.size() ;
      int max_piles=0 ;
      for(int i =0 ; i<n ; i++){
        if (piles[i]>max_piles){
            max_piles=piles[i];
        }

      } 
      
      int left = 1 ; 
      int right= max_piles ;
      int mid=0 ;
      int k=max_piles;

      while(left<=right){

        mid=left+(right-left)/2 ;
        long long hours=0;
        for(int i =0 ; i<n ; i++){
            hours+= (mid + piles[i] -1 )/mid ;
            

        }
        
        if(hours>h){
            left=mid+1;
            
        }else{
            k=mid;
            right=mid-1 ;
        }
        
        cout<<k<<" "<<mid<<" "<<hours<<endl;

        

      }return k  ;

      
    }
};
