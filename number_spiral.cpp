#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        ll y, x, z;
        cin >> y >> x;

        z = max(y, x);

        if (z%2 == 0){
            //(4,1) --> 16 - (1-1) + (4-4)
            //(4,3) --> 16 - (3-1) + (4-4)
            //(y,x) --> z² - (x-1) + (y-z)

            cout << z*z - (x - 1) + (y - z) << endl;
        }else{
            //(3,2) --> 9 - (3-1) + (2-3)
            //(1,3) --> 9 - (1-1) + (3-3)
            //(2,3) --> 9 - (2-1) + (3-3)
            //(3,1) --> 9 - (3-1) + (1-3)
            //(y,x) --> z² - (y-1) + (x-z)
            
            cout << z*z - (y - 1) + (x - z) << endl;
        }
    }

    return 0;
}