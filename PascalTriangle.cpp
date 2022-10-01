#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal(numRows);
    for(int i=0; i<numRows; i++) {
        pascal[i].push_back(1);
        for(int j=1; j<i; j++) {
            int temp = pascal[i-1][j-1] + pascal[i-1][j];
            pascal[i].push_back(temp);
        }
        pascal[i].push_back(1);
    }
    pascal[0].pop_back();
    return pascal;
}

int main() {
    int numRows = 5;
    vector<vector<int>> pascal = generate(numRows);
    for(int i=0; i<pascal.size(); i++) {
        int n = pascal[i].size();
        for(int j=0; j<n; j++) {
            cout << pascal[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}