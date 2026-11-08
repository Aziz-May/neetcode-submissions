class Solution {
public:
    bool isValid(string s) {
//it s pretty obvious that the datastructure that can help us solve this is a stack
// every '(' must be closed by ')' before any other closing character '}' or ']'
// push openings char in stack 
// go through the string stop if a closing char dosn't match the opening char in the stack => that's invalid
// if everything goes right check if the stack is empty => that's valid 
//if stack still have opening chars => that's invalid
        stack<char> openings ; 
        int i=0 ;
        char expected ;
        
       while(i<s.length()){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                openings.push(s[i]) ;
            }else{
                if(s[i]==')'){
                    expected='(' ;
                }else if (s[i]=='}'){
                    expected='{';
                }else{
                    expected='[';
                }
                if(!openings.empty()){
                    if(expected!=openings.top()){
                        return false ;

                    }else{
                        openings.pop();
                    }

                }else{return false;}
                
            }
            
            
            i++;
        }
        
        return openings.empty() ;
        
    }
};
