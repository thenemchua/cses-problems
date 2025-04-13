#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    int count{1};
    vector<pair<int,int>> movie;

    for (int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        
        movie.push_back({start, end});
    }

    sort(movie.begin(), movie.end(), greater<pair<int,int>>());

    int s{movie[0].first};

    for (int i = 1; i < movie.size(); i++){
        if (movie[i].second <= s){
            count++;
            s = movie[i].first;
        }
    }

    cout << count;

    return 0;
}