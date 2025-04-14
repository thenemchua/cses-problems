#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    ll array[n];
    
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    ll best = -1e9, sum = 0;

    for (int k = 0; k < n; k++){
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }

    cout << best;

    return 0;
}