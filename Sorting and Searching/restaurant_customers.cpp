#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    int count{0};
    int mx_count{-1};
    vector<pair<int,int>> io;

    for (int i = 0; i < n; i++){
        int in, out;
        cin >> in;
        
        io.push_back({in, 1});

        cin >> out;

        io.push_back({out, -1});
    }

    sort(io.begin(), io.end());

    for (int i = 0; i < io.size(); i++){
        count += io[i].second;

        if (count > mx_count){
            mx_count = count;
        }
    }

    cout << mx_count;

    return 0;
}