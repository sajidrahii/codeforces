#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int NumOfStops, passengers = 0, pEnter = 0, pExit = 0;
    cin >> NumOfStops;
    vector<int> Tpassengers(NumOfStops);

    for(int i = 0; i < NumOfStops; i++){
        cin >> pExit >> pEnter;

        passengers = passengers - pExit + pEnter;

        Tpassengers[i] = passengers;
    }

    auto capacity = max_element(Tpassengers.begin(), Tpassengers.end());

    cout << *capacity;

    return 0;
}