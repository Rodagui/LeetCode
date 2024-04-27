/* 67. Add Binary */
#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /*string word = "athia";
    word.insert(0,"k");

    cout<<word;*/

    string b = "111";
    string a = "111";
    string ans = "";
    string acarreo = "0";
    int j;
  

    if(a.size() < b.size()){	//-----------CASE 1 Donde a es menor que b

    	j = b.size() -1;

    	for (int i = a.size() - 1 ; i >= 0 ; --i)
    	{	
    		
    		if(a[i] == '0' and b[j] == '0'){
    			
    			if(acarreo == "1"){
    				ans.insert(0,"1");
    				acarreo = "0";
    			}
    			else
    				ans.insert(0,"0");
    		}
    		else if( (a[i] == '0' and b[j] == '1') or (a[i] == '1' and b[j] == '0') ){
    			
    			if(acarreo == "1"){
    				ans.insert(0,"0");
    				acarreo = "1";
    			}
    			else
    				ans.insert(0,"1");
    		}
    		else{

    			if(acarreo == "1")
    				ans.insert(0,"1");
    			else
    				ans.insert(0,"0");
    			
    			acarreo = "1";
    		}

    		j--;
    	}

    	for (int i = j; i >= 0; --i)
    	{
    		if(b[i] == '0'){
    			if( acarreo == "1"){
    				ans.insert(0,"1");
    				acarreo = "0";
    			}
    			else{
    				ans.insert(0,"0");
    			}
    		}

    		if(b[i] == '1'){
    			if( acarreo == "1"){
    				ans.insert(0,"0");
    				acarreo = "1";
    			}
    			else{
    				ans.insert(0,"1");
    			}
    		}
    	}

    	if( acarreo == "1")
    		ans.insert(0,"1");

    }
    else if(b.size() < a.size()){  //-----------CASE 2 Donde a es menor que b

    	j = a.size() -1;

    	for (int i = b.size() - 1 ; i >= 0 ; --i)
    	{	
    		
    		if(b[i] == '0' and a[j] == '0'){
    			
    			if(acarreo == "1"){
    				ans.insert(0,"1");
    				acarreo = "0";
    			}
    			else
    				ans.insert(0,"0");
    		}
    		else if( (b[i] == '0' and a[j] == '1') or (b[i] == '1' and a[j] == '0') ){
    			
    			if(acarreo == "1"){
    				ans.insert(0,"0");
    				acarreo = "1";
    			}
    			else
    				ans.insert(0,"1");
    		}
    		else{

    			if(acarreo == "1")
    				ans.insert(0,"1");
    			else
    				ans.insert(0,"0");
    			
    			acarreo = "1";
    		}

    		j--;
    	}

    	for (int i = j; i >= 0; --i)
    	{
    		if(a[i] == '0'){
    			if( acarreo == "1"){
    				ans.insert(0,"1");
    				acarreo = "0";
    			}
    			else{
    				ans.insert(0,"0");
    			}
    		}

    		if(a[i] == '1'){
    			if( acarreo == "1"){
    				ans.insert(0,"0");
    				acarreo = "1";
    			}
    			else{
    				ans.insert(0,"1");
    			}
    		}
    	}

    	if( acarreo == "1")
    		ans.insert(0,"1");
    }
    else{	//-----------CASE 3 cuando son iguales

    	for (int i = a.size(); i >= 0; --i)
    	{
    		if(a[i] == '0' and b[i]== '0' ){
    			if(acarreo == "1"){
    				ans.insert(0,"1");
    				acarreo = "0";
    			}
    			else
    				ans.insert(0,"0");
    		}

    		if( (a[i] == '0' and b[i]== '1') or (a[i] == '1' and b[i]== '0') ){
    			
    			if(acarreo == "1"){
    				ans.insert(0,"0");
    				acarreo = "1";
    			}
    			else
    				ans.insert(0,"1");
    		}

    		if(a[i] == '1' and b[i]=='1'){

    			if(acarreo == "1")
    				ans.insert(0,"1");
    			else
    				ans.insert(0,"0");
    			

    			acarreo = "1";
    		}
    	}

    	if(acarreo == "1")
    		ans.insert(0,"1");

    }

    cout << ans;
    
    return 0;
}

