#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s, t, ans = "NO";
    int counter;
    cin >> s;
    cin >> t;

    reverse(s.begin(), s.end());

    if(s == t){
        ans = "YES";
    }

    cout << ans;

    return 0;
}