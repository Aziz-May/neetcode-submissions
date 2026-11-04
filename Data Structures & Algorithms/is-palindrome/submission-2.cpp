class Solution {
public:
    bool isPalindrome(string s) {
        unordered_set<char> alpha_nums;
        for(int i=0 ;i<123;i++){
            if((i>=48 && i<=57) || (i>=65 && i<=90) || (i>=97 && i<=122 )){
                     alpha_nums.insert((char)i);
            }
           
        }
        int left =0 ; int right = s.length()-1 ;
        int diff =0;
        while(left<right){
             while (left < right && !alpha_nums.contains(s[left]))
                left++;

            while (left < right && !alpha_nums.contains(s[right]))
                right--;

            if (left >= right) break;
            
            if(tolower(s[left])!=tolower(s[right]) ){
                return false ;
            }else{
                left++;
            right--;

            }
            
        }
        return true ;
    }
};
