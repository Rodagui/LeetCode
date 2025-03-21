/*A. A+B Again?*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int cases;

	cin >> cases;
	int num;
	int suma = 0;

	while(cases--){
		cin >> num;
		suma = 0; 

		while(num > 0){

			suma += (num%10);
			num /= 10;

		}

		cout << suma << "\n";
	}


	return 0;
}