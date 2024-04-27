/*28. Find the Index of the First Occurrence in a String*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack.find(needle) != string::npos)
            return haystack.find(needle);
        else
            return -1;
    }
};
