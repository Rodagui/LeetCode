/*136. Single Number*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	vector <int> arr = {1,1,2,2,4,4,5};
	
	int total;

	/*con el xor es tipo si pasa un numero selo "agrego" con la operacion 
	xor, si pasa de nuevo se lo quito */
	
	for(int i = 1; i < nums.size(); i++)
        total ^= nums[i];
    cerr << total;
	return 0;	
}