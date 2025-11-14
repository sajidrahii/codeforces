#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    string ans = "YES";
    n = abs(n);

    if(n == 0){
        ans = "NO";
        return 0;
    }

    while(n > 0){
        if(n % 10 != 4 && n % 10 != 7){
            cout << "NO";
            return 0;
        }
        n /= 10;
    }

    cout << "YES";
    
    return 0;
}