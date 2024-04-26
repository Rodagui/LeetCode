/*14. Longest Common Prefix Leetcode*/
#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string ans;

    vector <string> arr = {"abca","aba","aaab"};
    
    int tamMin = INT_MAX;
    string palMin = "";

    for (int i = 0; i < arr.size(); ++i)
    {
    	if( arr[i].size() < tamMin){
    		tamMin = arr[i].size();
    		palMin = arr[i];
    	}
    }
 	
 	for (int i = 0; i < arr.size(); ++i)
    {	
    	
    	while(arr[i].find(palMin) == string::npos or arr[i].find(palMin) != 0){
    		
    		if(palMin.size() == 0)
    			break;
    		else
    			palMin.pop_back();

    		cout << palMin << endl;
    	}

    	cout << palMin << ' ' << arr[i] << endl;
    	
    	if(arr[i].find(palMin) != 0){
    		ans = "";
    		break;
    	}
    	else
    		ans = palMin;
    }

    cout << ans;

    return 0;
}

/* class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int tamMin = INT_MAX;
        string palMin = "";
        string ans;

        for (int i = 0; i < strs.size(); ++i)
        {
    	    if( strs[i].size() < tamMin){
    		    tamMin = strs[i].size();
    		    palMin = strs[i];
    	    }
        }

 	
 	    for (int i = 0; i < strs.size(); ++i)
        {	
    	
    	    while(strs[i].find(palMin) == string::npos or strs[i].find(palMin) != 0){
    		
    		    if(palMin.size() == 0)
    			    break;
    		    else
    			    palMin.pop_back();
    	    }

    	    if(strs[i].find(palMin) != 0){
    		    ans = "";
                break;
            }
    	    else
    		    ans = palMin;
        }

        return ans;
    }
};

*/