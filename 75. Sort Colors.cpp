/*75. Sort Colors*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	vector <int> arr = {2,0,1}; 
	int indice = 0;

	int ceros = 0;
	int unos = 0;
	int dos = 0;

		for (int i = 0; i < arr.size() ; ++i)
		{
			if(arr[i] == 0)
				ceros++;
			else if(arr[i] == 1)
				unos++;
			else
				dos++;
		}

		//cerr << ceros << ' ' << unos << ' ' << dos << endl;

	while(ceros--){
		arr[indice] = 0;
		indice++;
	}

	while(unos--){
		arr[indice] = 1;
		indice++;
	}

	while(dos--){
		arr[indice] = 2;
		indice++;
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}