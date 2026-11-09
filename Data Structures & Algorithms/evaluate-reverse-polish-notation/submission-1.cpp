class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       // I tried to solve this using vectors and without stacks 
       //it seems that the problem is not well elaborated 
    // the reverse polish notation enforce that the operation must be executed with    the closest two available numbers 
       //so the easiest and most suitable datastructure to solve this is a stack 
       //For a valid Reverse Polish Notation  it is guaranteed that whenever you encounter an operator, there are at least two operands available.
        stack<int> numbers ;
        int n = tokens.size() ;
        int right_operand=0 , left_operand=0 ; 
        for(int i =0 ; i<n ; i++){
            if (tokens[i]=="+"){
                right_operand=numbers.top() ; 
                numbers.pop(); 
                left_operand=numbers.top(); 
                numbers.pop();
                numbers.push(right_operand+left_operand);
                
            }else if(tokens[i]=="-"){
                      right_operand=numbers.top() ; 
                numbers.pop(); 
                left_operand=numbers.top(); 
                numbers.pop();
                numbers.push(left_operand-right_operand);


            }else if(tokens[i]=="*"){
                      right_operand=numbers.top() ; 
                numbers.pop(); 
                left_operand=numbers.top(); 
                numbers.pop();
                numbers.push(right_operand*left_operand);

            }else if(tokens[i]=="/"){
                      right_operand=numbers.top() ; 
                numbers.pop(); 
                left_operand=numbers.top(); 
                numbers.pop();
                numbers.push(left_operand/right_operand);

            }
            else{
                numbers.push(stoi(tokens[i])) ;
            }
        }
        
        return numbers.top();
        
    }
};
