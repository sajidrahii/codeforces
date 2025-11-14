#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int n, sum = 0, counter = 0;
    // cin >> n;
    // vector<vector<int>> mat(n, vector<int>(3));

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < 3; j++){
    //         cin >> mat[i][j];
    //     } 
    // }

    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < n; j++){
    //         sum += mat[j][i];
    //     }
    // }

    // if(sum == 0){
    //     cout << "YES";
    // } else{
    //     cout << "NO";
    // }
    // ----------------------  	Wrong answer on test 81

    int n, x = 0, y = 0, z = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int xx, yy, zz;
        cin >> xx >> yy >> zz;

        x += xx;
        y += yy;
        z += zz;
    }

    if(x == 0 && y == 0 && z == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}