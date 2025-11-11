#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    if(n >= 1 && n <= 1000){
        int a, b, c;

        for(int i = 0; i < n; i++){
            cin >> a >> b >> c;
            int sum = a + b + c;
            if(sum >= 2){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}