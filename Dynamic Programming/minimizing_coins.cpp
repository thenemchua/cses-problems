#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, x;
    cin >> n >> x;
    
    ll dp[x+1];
    int coins[n];

    dp[0] = 0;

    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    for (int i = 1; i<=x; i++){
        dp[i] = 1e9;

        for (int c : coins){
            if (i >= c){
                dp[i] = min(dp[i], dp[i-c] + 1);
            }
        }
    }
    
    cout << ((dp[x] >= 1e9) ? -1 : dp[x]);

    return 0;
}