/*125. Valid Palindrome*/
#include <bits/stdc++.h>

using namespace std; 

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	string s;
	char letra;
	string aux = "";
	string auxReverse = "";

	getline(cin, s);

	for (int i = 0; i < s.size(); ++i)
	{
		if(isalpha(s[i]))
			aux += tolower(s[i]);

		if(isdigit(s[i]))
                aux += s[i];
	}

	auxReverse = aux;
	reverse(auxReverse.begin(), auxReverse.end());

	if(auxReverse == aux)
		cout << "true";
	else
		cout << "false";

	return 0;
}