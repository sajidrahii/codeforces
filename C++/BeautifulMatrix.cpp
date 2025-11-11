#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    const int row = 5, col = 5;
    int matrix[row][col];
    int moves = 0;

    int middle_row = (float) row / 2;
    int middle_col = (float) col / 2;


    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        cout << "\n";
        for(int j = 0; j < col; j++){

            if(matrix[i][j] == 1){
                int num_row = i, num_col = j;

                moves = abs(num_col - middle_col) + abs(num_row - middle_row);
            }
        }
    }

    cout << moves;

    return 0;
}