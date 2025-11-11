#include<iostream>
#include<vector>
#include <string>
using namespace std;

int main(){
    int words;
    cin >> words;
    vector<string> arr(words);

    for(int i = 0; i < words; i++){
        string word;
        cin >> word;

        if(word.length() > 10){
            for(int j = 0; j < word.length(); j++){
                int len = word.length() - 2;
                arr[i] = word[0]+to_string(len)+word[word.length() - 1];
            }
        } else{
            arr[i] = word;
        }
    }

    for(int i = 0; i < words; i++){
        cout << arr[i] << "\n";
    }
}