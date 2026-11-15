class Solution {
public:
    int characterReplacement(string s, int k) {
       unordered_map<char , int> freq ;
       int left =0 ; 
       int max_freq=0 ;
       int window_size=0 ;
       int max_window_size=0 ;
       
        for(int right=0 ; right<s.length();right++){
            freq[s[right]]++;
            if(freq[s[right]]>max_freq){
                max_freq=freq[s[right]];

            }
            while(right-left-max_freq+1>k){
                
                freq[s[left]]--;
                left++ ;
                



            }
            window_size=right-left+1 ;
            
            if(window_size>max_window_size){
                max_window_size=window_size ;
            }
            
        }
        return max_window_size;
    }
};
