/*35. Search Insert Position*/

/*

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int ans = -1;
        
        for(int i = 0; i < nums.size(); i++){
         
            if(nums[i] >= target){
                ans = i;
                break;                
            }
        }
        
        if(ans == -1)
            ans = nums.size();
        
        return ans;
        
    }
};

*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];
	}

	int num;

	cin >> num;

	int pos = -1;

	for (int i = 0; i < tam; ++i)
	{
		if(arr[i] >= num){
			pos = i;
			break;
		}
	}

	if(pos == -1){
		pos = tam;
	}

	cout << pos;

	return 0;
}