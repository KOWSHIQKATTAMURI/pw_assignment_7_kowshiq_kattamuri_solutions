#include<bits/stdc++.h>
using namespace std;

void solve(string &num1, int pos1, string &num2, int pos2, int carry, string &ans){
    if(pos1 < 0 and pos2 < 0){
        if(carry != 0){
            ans.push_back(carry + '0');
        }
        return;
    }
    int first = (pos1 >= 0 ? num1[pos1] : '0') - '0';
    int second = (pos2 >= 0 ? num2[pos2] : '0') - '0';
    int sum = first + second + carry;
    int final = sum%10;
    carry = sum/10;
    ans.push_back(final + '0');
    solve(num1, pos1 - 1, num2, pos2 - 1, carry, ans);
}

string addStrings(string num1, string num2) {
    string ans = "";
    solve(num1, num1.size() - 1, num2, num2.size() - 1, 0, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    string ans = addStrings(num1, num2);
    cout << ans;
}
