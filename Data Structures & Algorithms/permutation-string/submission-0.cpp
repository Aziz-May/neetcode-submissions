class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false ;
      unordered_map <char , int> freq ;
      unordered_map<char , int> freq1 ;
      for(int i=0 ; i<s1.length();i++){
        freq[s1[i]]++ ;

      }  
      int len=s1.length();
       while(len>0){
            freq1[s2[len-1]]++;
            len--;
        }
        if(freq==freq1) return true ;
        len=s1.length();
        int leave=0;
      for(int enter=len ; enter<s2.length();enter++){
            leave=enter-len;
            freq1[s2[enter]]++;
            freq1[s2[leave]]--;
            if(freq1[s2[leave]]==0) freq1.erase(s2[leave]);
            if(freq==freq1)  return true ;
        
        
       

      }
      return false;
    }
};
