#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, counter = 0;
    cin >> a >> b;

    while(a <= b){
        ++counter;

        a *= 3;
        b *= 2;
    }

    cout << counter;

    return 0;
}