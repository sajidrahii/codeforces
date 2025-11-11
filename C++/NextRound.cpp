#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k, selected = 0;
    cin >> n >> k;
    vector<int> array(n);

    if(n >= k && k >= 1 && k <= 50){
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        for(int a : array){
            if(a > 0 && a >= array[k - 1]){
                selected++;
            }
        }
    }

    cout << selected << "\n";

    return 0;
}