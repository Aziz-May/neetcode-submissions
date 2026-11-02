class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v ;
        vector<string> v_inter ;
        array <int ,26 > freq  ;
        map<array<int, 26> ,vector<string>> dict;
        for(int i=0 ; i<strs.size() ; i++){
           freq.fill(0);
            for(int j =0 ; j<strs[i].length();j++) {
                
                freq[strs[i][j]-'a']++;
            }
        

            dict[freq].push_back(strs[i]);

            
        }
        for(auto it : dict){
            v.push_back(it.second);
        } 
        
       return v ; 
    }
};
