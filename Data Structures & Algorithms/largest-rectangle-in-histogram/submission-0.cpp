class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int  n = heights.size(); 
       
        stack<int> indexes ; 
        indexes.push(0);
        int maxx = 0 ;
        int curr=0 ;
        for(int i =1 ;i<n ; i++){
           
               
           
                
                
                while(!indexes.empty() && heights[i]<heights[indexes.top()]){
                    int top_index=indexes.top();
                    indexes.pop();
                    if(!indexes.empty()){
                         curr=(i - indexes.top()-1)*heights[top_index];
                    }else{
                        curr = i*heights[top_index] ;
                    }
                    
                    
                    if(curr>maxx){
                        maxx=curr;
                    } 
                }
                indexes.push(i);
            }

        
        return maxx;
        
    }
};
