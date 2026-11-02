class Solution {
public:

    string encode(vector<string>& strs) {
        string s ="",prefix_length ; 

        for(int i =0 ; i<strs.size(); i++){
            prefix_length=to_string(strs[i].length());
            if(strs[i].length()<10){
            prefix_length="00"+to_string(strs[i].length());
            }else if(strs[i].length()<100){
                prefix_length="0"+to_string(strs[i].length());
            }
            s+=prefix_length+strs[i] ;
        }
        return s ;

    }

    vector<string> decode(string s) {
        int prefix_length = 0;
        vector<string> strs ;
        while(s.length()>0){
            prefix_length=stoi(s.substr(0,3));
            s.erase(0,3);
            strs.push_back(s.substr(0,prefix_length));
            s.erase(0,prefix_length);


        }
        return strs;

    }
};
