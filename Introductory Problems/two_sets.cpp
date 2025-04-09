#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;

    ll sum = static_cast<ll>(n) * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO" << "\n";
        return 0;
    }

    cout << "YES" << "\n";
    
    ll target = sum / 2;
    
    vector<int> s1, s2;
    
    for (int i = n; i >= 1; i--) {
        if (target >= i) {
            s1.push_back(i);
            target -= i;
        }else{
            s2.push_back(i);
        }
    }
    
    cout << s1.size() << "\n";
    for (int num : s1) {
        cout << num << " ";
    }
    cout << "\n";
    
    cout << s2.size() << "\n";
    for (int num : s2) {
        cout << num << " ";
    }
    cout << "\n";
    
    return 0;
}
