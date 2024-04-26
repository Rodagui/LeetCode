/*27. Remove Element*/
#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector <int> nums = {4, 1, 2, 4, 4, 0, 0} ;
    int val = 4;
    int totVal = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if(nums[i] == val){
            totVal++;
        }
    }

    int k = nums.size() - totVal;

    int pos = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if(nums[i] != val){
            nums[pos] = nums[i];
            pos++;
        }

    }

    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i] << "-";
    
    }

    cout << k;


    return 0;
}

/*class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int totVal = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if(nums[i] == val){
            totVal++;
        }
    }

    int k = nums.size() - totVal;

    int pos = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if(nums[i] != val){
            nums[pos] = nums[i];
            pos++;
        }

    }

        return k;
    }
};*/