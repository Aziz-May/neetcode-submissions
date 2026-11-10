class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        stack<int> days;
        vector<int> output(n, 0);

        for (int i = 0; i < n; i++) {

            while (!days.empty() && temperatures[i] > temperatures[days.top()]) {

                int previous = days.top();
                days.pop();

                output[previous] = i - previous;
            }

            days.push(i);
        }

        return output;
    }
};