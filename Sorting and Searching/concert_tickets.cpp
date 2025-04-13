#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        tickets.insert(x);
    }

    for (int i = 0; i < m; i++){
        int customer;
        cin >> customer;

        auto it = tickets.upper_bound(customer);

        if(it == tickets.begin()){
            cout << -1 << " ";
        }else{
            it--;
            cout << *it << " ";
            tickets.erase(it);
        }
    }

    return 0;
}