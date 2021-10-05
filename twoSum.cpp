/*1. Two Sum*/
/*se puede hacer cuadrática para arreglos pequeños, pero tambien 
se puede optmizar con un multimap que guarde el numero y la posición del numero*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int sizeNums;
	int target;

	cin >> sizeNums;

	vector <int> nums(sizeNums);

	for (int i = 0; i < sizeNums; ++i)
	{
		cin >> nums[i];
	}
	cin >> target;

	for (int i = 0; i < sizeNums; ++i)
	{
		cout << nums[i] << ' '; 
	}

	cout << endl;

	vector <int> ans(2);
	bool found = false;
	int aux = 0;

	for (int i = 0; i < sizeNums; ++i)
	{
		aux = target - nums[i];

		for (int j = i + 1; j <sizeNums ; ++j)
		{
			if(nums[j] == aux){
				ans[0] = i;
				ans[1] = j;
				found = true;
				break; 
			}
		}

		if(found)
			break;
	}

	cout << ans[0] << ' ' << ans[1];



	return 0;
}


/* --------- CLASS 4 LEETCODE ----------------



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        int sizeNums = nums.size();
        vector <int> ans(2);
        bool found = false;
        int aux = 0;
        
        for(int i = 0; i < sizeNums; i++){
            
            aux = target - nums[i];
            
            for(int j = i + 1; j < sizeNums; j++){
                
                if(nums[j] == aux){
                    ans[0] = i;
                    ans[1] = j;
                    found = true;
                    break;
                }
            }
            
            if(found)
                break;
        }
        
        return ans;
        
    }
};




*/