#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){
    stringstream str(s);
    string word, ans;
    while(str >> word){
        reverse(word.begin(), word.end());
        ans += word;
        ans.push_back(' ');
    }
    ans.pop_back();
    return ans;
}

int main(){
    string s;
    getline(std::cin, s);
    cout << reverseWords(s);
}
