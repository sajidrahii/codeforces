#include<iostream>
using namespace std;

int main(){
    int weight;
    cin >> weight;

    while(weight>= 1 && weight <= 100){
        if(weight % 2 == 0 && weight >= 4){
            cout << "YES\n";
            break;
        } else{
            cout << "NO\n";
            break;
        }
    }

    return 0;
}