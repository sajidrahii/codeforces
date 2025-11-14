#include<iostream>
using namespace std;

int main(){

    string s, ans = "NO";
    cin >> s;

    int counter = 1;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i + 1]){
            ++counter;

            if(counter == 7){
                ans = "YES";
                break;
            }
        } else{
            counter = 1;
        }
    }

    cout << ans;

    return 0;
}