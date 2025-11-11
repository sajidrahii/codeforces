#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string one, two;
    cin >> one >> two;

    for(char &c : one) c = tolower(c);
    for(char &c : two) c = tolower(c);

    if(one < two){
        cout << -1;
    } else if(one > two){
        cout << 1;
    } else{
        cout << 0;
    }

    return 0;
}