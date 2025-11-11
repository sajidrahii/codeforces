#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s, result;
    cin >> s;

    char vowels[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};

    for(int i = 0; i < s.length(); i++){
        for(char c : vowels){
            if(tolower(s[i]) == tolower(c)){
                s.erase(i, 1);
                --i;
            }

            s[i] = tolower(s[i]);
        }
    }

    for(char c : s){
        result += '.';
        result += c;
    }

    cout << result;

    return 0;
}