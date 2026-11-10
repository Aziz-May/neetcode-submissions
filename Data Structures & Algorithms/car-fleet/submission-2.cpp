class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        int n_cars = position.size() ; 
        vector<pair<int,int>> cars ;
        stack<double> st ;
         
        for(int i =0 ; i<n_cars;i++){
            pair<int ,int> car ;
            car.first = position[i]; 
            car.second = speed[i]; 
            cars.push_back(car);
        }

        sort(cars.begin() , cars.end(), [](const auto& a , const auto& b)
          { 
            return a.first > b.first;
          }
        );
        
        st.push((target-cars[0].first)/cars[0].second);
        for(int i =1 ; i<n_cars ; i++){
           double tcurr=(double)(target-cars[i].first)/(double)cars[i].second ;
           double tprev = st.top();

            if(tcurr>tprev){
                st.push(tcurr);
            }
                     
            

            
            
        }
        return st.size();
        
        
    }
};
