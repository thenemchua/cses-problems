#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    vector<ll> sticks(n);

    for (int i = 0; i < n; i++){
        cin >> sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    int median = 0;
    median = sticks[(sticks.size() / 2)];

    ll distance = 0;

    for (int i = 0; i < n; i++){
        distance += abs(median - sticks[i]);
    }
    cout << distance;

    return 0;
}