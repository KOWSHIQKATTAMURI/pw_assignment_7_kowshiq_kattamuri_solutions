#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t){
    vector<int> first(256, -1), second(256, -1);
    for(int i = 0; i < s.length(); i++){
        if(first[s[i]] != second[t[i]]){
            return false;
        }
        first[s[i]] = second[t[i]] = i;
    }
    return true;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << isIsomorphic(s, t) << endl;
}
