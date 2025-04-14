#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    sort(coins.begin(), coins.end());

    ll sum = 1;

    for (int i = 0; i < n; i++){
        if (coins[i] > sum){
            break;
        }
        sum += coins[i];
    }

    cout << sum;

    return 0;
}

