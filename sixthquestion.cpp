#include<bits/stdc++.h>
using namespace std;

bool rotateString(string A, string B, int rotation){
    for(int i = 0; i < A.length(); i++) {
        if(A[i] != B[(i + rotation)%B.length()]) {
            return false;
        }
    }
    return true;
}

bool rotateString(string s, string goal){
    if(s == goal){
        return true;
    }
    if(s.length() != goal.length()){
        return false;
    }
    for(int i = 0; i < s.length(); i++) {
        if(rotateString(s, goal, i)){
            return true;
        }
    }
    return false;
}

int main(){
    string s, goal;
    cin >> s >> goal;
    cout << rotateString(s, goal) << endl;
}
