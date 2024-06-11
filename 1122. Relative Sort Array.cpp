/*1122. Relative Sort Array*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	vector <int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
	vector <int> arr2 = {2,1,4,3,9,6};

	vector <int> repeticiones(arr2.size(), 0);
	vector <int> ans;
	vector <int> rest;
	int aux = 0;

	for (int i = 0; i < arr2.size(); ++i)
		for (int j = 0; j < arr1.size(); ++j)
			if(arr1[j] == arr2[i])
				repeticiones[i]++;

	for (int i = 0; i < arr1.size(); ++i)
	{
		aux = 0;

		for (int j = 0; j < arr2.size(); ++j)
			if(arr1[i] != arr2[j])
				aux++;
			
		if(aux == arr2.size())
			rest.push_back(arr1[i]);
		
	}

	for (int i = 0; i < repeticiones.size(); ++i)
		for (int j = 0; j < repeticiones[i]; ++j)
			ans.push_back(arr2[i]);
		
	sort(rest.begin(), rest.end());
	for (int i = 0; i < rest.size(); ++i)
		ans.push_back(rest[i]);
		
	
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << ' ';
	
	return 0;
}
