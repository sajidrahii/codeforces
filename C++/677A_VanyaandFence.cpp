#include<iostream>
using namespace std;

int main(){
    int n, h, road_w;
    cin >> n >> h;

    road_w = n;

    for(int i = 0; i < n; i++){
        int b;
        cin >> b; 

        if(b > h){
            ++road_w;
        }
    }

    cout << road_w;

    return 0;
}