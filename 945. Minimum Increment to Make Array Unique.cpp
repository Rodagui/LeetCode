/*945. Minimum Increment to Make Array Unique*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	vector <int> nums = {5,6,7,12,12,12,22,22,22,23};
	sort(nums.begin(), nums.end());
	
	int aux  = nums[0] + 1;
	int ans = 0;

	for (int i = 0; i < nums.size() - 1; ++i)
	{
		if(nums[i] >= nums[i + 1]){
			//cerr << nums[i] << ' ' << nums[i+1] << ' ' << aux << endl;
			ans += aux - nums[i + 1];
			nums[i + 1] = aux;
			aux++;
			
		}
		else{
			aux = nums[i + 1] + 1;
		}
	}

	cout << ans << endl;

	return 0;
}