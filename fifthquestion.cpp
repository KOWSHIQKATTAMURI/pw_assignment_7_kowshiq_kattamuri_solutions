#include<bits/stdc++.h>
using namespace std;

string rev(string &str, int start, int k){
    int i = start, j = start + k - 1;
    if(j >= str.length()){
        j = str.length() - 1;
    }
    while(i < j){
        swap(str[i++], str[j--]);
    }
    return str;
}

string reverseStr(string s, int k){
    if(s.length() <= 1){
        return s;
    }
    string ans;
    for(int i = 0; i < s.length() - 1; i = i + 2*k){
        ans = rev(s, i, k);
    }
    return ans;
}

int main(){
    string s;
    int k;
    cin >> s >> k;
    cout << reverseStr(s, k) << endl;
}
