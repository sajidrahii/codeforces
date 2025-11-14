#include<iostream>
using namespace std;

int main(){
    int n, anton = 0, danik = 0; 
    cin >> n;

    string s = "", winner;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        s += c;
    }

    for(char c : s){
        if(c == 'A') ++anton;
        else if(c == 'D') ++danik;
    }

    if(anton > danik) winner = "Anton";
    else if(danik > anton) winner = "Danik";
    else winner = "Friendship";
    
    cout << winner;

    return 0;
}