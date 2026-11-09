class MinStack {
//this problem could be solved using  built in stacks , arrays or linked lists 
// this problem was solved using linked lists 
//the ides is : 
//when pushing we have to push encoded  value in the stack and keep the minimum 
//when deleting we should update the minimum 
// when returning the top we can restor the original value using the encoded and min
//for getMin just return the min saved  
private :    
    struct Node{
            long long value ; 
            Node* next ; 

            Node(long long val ){
                value=val ;
                next= nullptr ;
            }

        };
        
        Node* topNode ;
        long long minimum ; 
public:
    MinStack() { 
        topNode = nullptr ;
        minimum=0;
        
        
    }
    
    void push(int val) {
        if(this->topNode==nullptr){
        Node* node = new Node(0) ; 
    
        node->next=this->topNode;
        this->topNode = node ;
        this->minimum = val ;


        }else{
        long long encoded=val-this->minimum;
        Node* node = new Node(encoded) ; 
        node->next=this->topNode;
        this->topNode = node ;
        if(val<this->minimum){
            this->minimum = val ;
        }
            
        }
        
        
        
    }
    
    void pop() {
        
        
        Node* temp = this->topNode ; 
        long long encoded =temp->value ;
        if(encoded<0){
            this->minimum=this->minimum-encoded ;
        }
        this->topNode= this->topNode->next ;

        delete temp ; 
        
    }
    
    int top() {
        long long top = this->topNode->value;

        return (top > 0) ? (top + this->minimum) : this->minimum;
        
    }
    
    int getMin() {
        return this->minimum ;
    }
};
