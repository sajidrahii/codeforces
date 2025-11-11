#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int M, N;
    cin >> M >> N;

    float row = (float) M / 2;
    float colom = (float) N / 1;

    float answer = row * colom;
    cout << floor(answer);
    
    return 0;
}