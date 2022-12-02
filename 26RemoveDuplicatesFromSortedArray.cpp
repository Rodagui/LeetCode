/*26RemoveDuplicatesfromSortedArray*/

/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int tam = nums.size();
        int j = 0;
        
        for(int i = 1; i < tam; i++){
            if(nums[i] == nums[j])
                continue;
            else{
                nums[j+1] = nums[i];
                j++;
            }
        }
        
        return j + 1;
        
    }
};*/

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

	int j = 0;

	for (int i = 1; i < tam ; ++i)
	{

		if(arr[i] == arr[j])
			continue;
		else{

			arr[j+1] = arr[i];
			j++;
		}
	}

	cout << j + 1 << '\n';

	for (int i = 0; i < tam; ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}