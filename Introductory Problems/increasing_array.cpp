#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll ans{0};

    int n;

    cin >> n;

    int curr;

    cin >> curr;

    vector<int> nums(n);

    for (int i = 0; i < n-1; i++){
        int next;
        cin >> next;
        ans += max(0, curr - next);
        curr = max(next, curr);
    }

    cout << ans;
    return 0;
}