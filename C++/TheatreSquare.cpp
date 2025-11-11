// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     long long n, m, a, counter = 1;
//     cin >> n >> m >> a;
//     long long areaOfRec = n * m;
//     long long areaOfSq = a * a;

//     if (n >= 1 && m >= 1 && a >= 1){
//         while(counter * areaOfSq < areaOfRec){
//             ++counter;
//         }

//         if(counter > 1 && counter % 2 != 0){
//             counter += 1;
//         }
//     }

//     cout << counter << "\n";

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long tilesAlongLength = (n + a - 1) / a;
    long long tilesAlongWidth = (m + a - 1) / a;

    cout << tilesAlongLength * tilesAlongWidth << "\n";

    return 0;
}