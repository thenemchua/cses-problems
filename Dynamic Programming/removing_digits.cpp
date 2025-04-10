#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    int dp[n+1];
    dp[0] = 0;

    for (int i = 1; i <= n; i++){
        dp[i] = 1e9;
        int i2 = i;

        while(i2){
            dp[i] = min(dp[i], dp[i-i2%10] + 1);
            i2/=10;
        }
    }

    cout << dp[n];
    return 0;
}