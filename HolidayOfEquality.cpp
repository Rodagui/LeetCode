/*A. Holiday Of Equality*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int tam;

	cin >> tam;
	int mayor = -1;

	vector <int> arr(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> arr[i];

		if(arr[i] > mayor)
			mayor = arr[i];
	}

	int suma = 0;

	for (int i = 0; i < tam; ++i)
	{
		suma += abs(mayor - arr[i]);
	}


	cout << suma;
	


	return 0;
}