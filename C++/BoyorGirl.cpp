#include<iostream>
#include<cctype>
#include<set>
using namespace std;

int main(){
    string str;
    cin >> str;

    // if(str.length() > 0 && str.length() < 100){
    //     for(char &c : str) c = tolower(c);

    //     for(int i = 0; i < str.length(); i++){
    //         for(int j = i + 1; j < str.length(); j++){
    //             if(str[i] == str[j]){
    //                 str = str.erase(j, 1);
    //             }
    //         }
    //     }
    // }

    // if(str.length() % 2 == 0){
    //     cout << "CHAT WITH HER!";
    // } else{
    //     cout << "IGNORE HIM!";
    // }

    set<char> uniqChars;
    for(char &c : str){
        uniqChars.insert(tolower(c));
    }

    if(uniqChars.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    } else{
        cout << "IGNORE HIM!";
    }
    
    return 0;
}