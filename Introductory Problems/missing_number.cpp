#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    ll res;
    ll n;
    cin >> n;
    
    res = ((n+1) * n) / 2;

    for (int i = 0; i < n - 1; i++){
        int m;
        cin >> m;
        res -= m;
    }

    cout << res;
 
    return 0;
}