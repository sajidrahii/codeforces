#include<iostream>
using namespace std;

int main(){
    int upper = 0, lower = 0;
    string s;
    cin >> s;

    for(char c : s){
        if(isupper(c)){
            upper++;
        } else{
            lower++;
        }
    }

    if(upper < lower || upper == lower){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    } else{
        for(int i = 0; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }

    cout << s;

    return 0;
}