#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    
    int k[n];

    for (int i = 0; i < n; i++){
        cin >> k[i];
    }

    int l = 0;
    int ans = 0;

    set<int> songs;

    for (int r = 0; r < n; r++){
        while(songs.count(k[r]) > 0){
            songs.erase(k[l]);
            l++;
        }

        songs.insert(k[r]);
        ans = max(ans, r - l + 1);
    }

    cout << ans;

    return 0;
}