#include<iostream>
using namespace std;

int main(){ 
    int k, n, w, dollars = 0, borrow = 0;

    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++){
        dollars += (i * k);
    }

    borrow = dollars - n;

    if(borrow < 0){
        borrow = 0;
    }

    cout << borrow;

    return 0;
}