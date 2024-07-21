class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector <pair <int, int>> array;

        for(int i = 0; i <  nums.size(); i++){
            array.push_back(make_pair(nums[i], i));
        }

        bool ans = false;
        sort(array.begin(), array.end());

        for(int i = 0; i < array.size() - 1; i++){
                if(array[i].first == array[i+1].first and  abs(array[i].second - array[i + 1].second) <= k){
                    ans = true;
                    break;
                }
        }

        return ans;
    }
};