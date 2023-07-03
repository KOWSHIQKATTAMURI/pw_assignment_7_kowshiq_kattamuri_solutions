#include<bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>>& coordinates) {
    int n = coordinates.size(), x1 = coordinates[0][0], y1 = coordinates[0][1], x2 = coordinates[1][0], y2 = coordinates[1][1];
    for(int i = 2; i < n; i++){
        int x = coordinates[i][0], y = coordinates[i][1];
        if((y - y1)*(x - x2) != (y - y2)*(x - x1)){
            return false;
        } 
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> coordinates(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        cin >> coordinates[i][0] >> coordinates[i][1];
    }
    cout << checkStraightLine(coordinates);
}
