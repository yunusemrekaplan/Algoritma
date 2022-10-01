#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = strs[0].length();
        string res = "";
        char temp;
        for(int i=0; i<strs.size(); i++) {
            if(strs[i].length() < min) min = strs[i].length();
        }
        for(int i=0; i<min; i++) {
            temp = strs[0][i];
            for(int j=0; j<strs.size(); j++) {
                if(strs[j][i] != temp) {
                    return res;
                } 
            }
            res += temp;
        }
        return res;
    }
};
