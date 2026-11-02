class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> characters_s , characters_t ; 
        if(s.length() != t.length()){
            return false ;
        }else{
            for(int i=0 ; i<s.length() ; i++){
                if(characters_s.contains(s[i])){
                    characters_s[s[i]]++ ;
                }else{
                    characters_s[s[i]]=1;
                }
                if(characters_t.contains(t[i])){
                    characters_t[t[i]]++ ;
                }else{
                    characters_t[t[i]]=1;
                }

            }
            return(characters_s == characters_t) ;
        }
        
        
    }
};
