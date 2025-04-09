#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin >> n;

    ll zeros{0};
    
    for(ll i=5; i<=n; i*=5){
        zeros += n/i;
    }

    cout << zeros;

    return 0;
}