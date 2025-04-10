#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1e9 + 7;

int main(){
    int n;
    cin >> n;

    vector<ll> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++){
        for (int dice = 1; dice <= min(i, 6); dice++){
            dp[i] = (dp[i] + dp[i - dice]) % M;
        }
    }

    cout << dp[n];
    
    return 0;
}