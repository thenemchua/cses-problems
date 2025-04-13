#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, x;
    cin >> n >> x;

    map<int,int> m;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        if (m.count(x - a)){
            cout << m[x - a] << " " << i + 1;
            return 0;
        }

        m[a] = i + 1;
    }

    cout << "IMPOSSIBLE";

    return 0;
}