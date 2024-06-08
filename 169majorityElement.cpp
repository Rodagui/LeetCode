/*169. Majority Element*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	
	int tam;
	cout << "Tam del arreglo:";
	cin >> tam;
	vector <int> nums(tam);
	cout << "Ingresa los numeros del arreglo:";

	for (int i = 0; i < tam; ++i)
		cin >> nums[i];
	
	sort(nums.begin(), nums.end());
        
    int tamMax = 0;
    int numAct = nums[0];
    int cuenta = 0;
    int ans = nums[0];

    for(int i = 1; i < nums.size(); i++ ){
            
        if(nums[i] == numAct){
            cuenta++;
            // creo que sepuede agregar una bandera, donde si el tamaño excede n/2 ya encontramos la respuesta
            /*
			if(cuenta >= n/2){
				numAct = nums[i];
				break;
			}
            */
            if(cuenta > tamMax){
                tamMax = cuenta;
                ans = nums[i];
            }
        }
        else{
            numAct = nums[i];
            cuenta = 1;
        }
    }

    cout << ans;
	return 0;
}