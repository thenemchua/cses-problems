#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1e9 + 7;

int main(){
    int n, x;
    cin >> n >> x;

    ll dp[x+1] = {0};
    dp[0] = 1;

    int coins[n];

    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    for (int c : coins){
        for (int i = 1; i <= x; i++){
            if(i >= c){
                dp[i] = (dp[i] + dp[i-c]) % M;
            }
        }
    }

    cout << dp[x];

    return 0;
}