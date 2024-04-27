/*66. Plus One*/

#include <bits/stdc++.h>

using namespace std;

int main(){


	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	vector <int> digits = {1, 2, 3};

	int acarreo = 1;
	int aux;

	for (int i = digits.size() - 1; i >= 0 ; --i)
	{
		aux = digits[i] + acarreo;

		if(aux == 10){
			acarreo = 1;
			digits[i] = 0;
		}
		else{
			digits[i] = aux;
			acarreo = 0;
			break;
		}
	}

	if(acarreo == 1)
		digits.insert(digits.begin(), 1);

	for (int i = 0; i < digits.size(); ++i)
		cout << digits[i] << " ";
	
	return 0;
}