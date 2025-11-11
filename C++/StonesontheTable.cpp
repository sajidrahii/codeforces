#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, counter = 0;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(s[i] == s[j]){
                ++counter;
                ++i;
            }else{
                ++i;
            }
        }
    }

    cout << counter;

    return 0;
}