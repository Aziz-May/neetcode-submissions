class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        unordered_set<char> seen; 
        int max_length=0;
        int length=0;
        int fix=0;
        for(int check =0 ; check<s.length();check++){
                     
             while(seen.contains(s[check])){
               seen.erase(s[fix]);
                fix++;
                
                
                
               } 
                seen.insert(s[check]);
                length=check-fix+1;
                if(length>max_length){
                    max_length=length;
                }
            }
           
        return max_length;
        
    }
};
