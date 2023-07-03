#include<bits/stdc++.h>
using namespace std;
 
bool backspaceCompare(string s, string t){
    string temp1, temp2;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '#'){
            if(temp1.length() != 0){
                temp1.pop_back();
            }
            continue;
        }
        temp1.push_back(s[i]);
    }
    for(int i = 0; i < t.length(); i++){
        if(t[i] == '#'){
            if(temp2.length() != 0){
                temp2.pop_back();
            }
            continue;
        }
        temp2.push_back(t[i]);
    }
    return temp1 == temp2;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << backspaceCompare(s, t) << endl;
}
