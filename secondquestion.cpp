#include<bits/stdc++.h>
using namespace std;

bool isStrobogrammatic(string num){
    unordered_map<char, char> kow{{'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'}};
    for(int l = 0, r = num.size() - 1; l <= r; l++, r--){
        if(kow.find(num[l]) == kow.end() or kow[num[l]] != num[r]){
            return false;
        }
    }
    return true;
}

int main(){
    string num;
    cin >> num;
    cout << isStrobogrammatic(num) << endl;
}
