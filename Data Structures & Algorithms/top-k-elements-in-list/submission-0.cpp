
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<vector<int>> buckets(nums.size() + 1);

        unordered_map<int, int> occurrences;

        for (int i = 0; i < nums.size(); i++) {
            occurrences[nums[i]]++;
        }

        for (auto it : occurrences) {
            buckets[it.second].push_back(it.first);
        }

        vector<int> output;

        int bucket = nums.size();

        while (bucket > 0 && k > 0) {

            if (!buckets[bucket].empty()) {

               
                for (int num : buckets[bucket]) {
                    output.push_back(num);
                    k--;

                    if (k == 0)
                        break;
                }
            }

            bucket--;
        }

        return output;
    }
};
