#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int main(){
    cin >> n;
    vector<int> pos(n+1);
    int ans = 1;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        pos[a] = i;
    }

    for (int i = 2; i <= n; i++){
        if (pos[i] < pos[i-1]){
            ans++;
        }
    }

    cout << ans;

    return 0;
}
