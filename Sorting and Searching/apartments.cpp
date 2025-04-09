#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicant(n), apt(m);

    for (int i=0; i<n; i++){
        cin >> applicant[i];
    }

    for (int i=0; i<m; i++){
        cin >> apt[i];
    }

    sort(applicant.begin(), applicant.end());
    sort(apt.begin(), apt.end());

    int match{0};
    int a{0}, b{0};

    while (a < n && b < m){
        if (applicant[a] - k <= apt[b] && apt[b] <= applicant[a] + k){
            match++;
            a++;
            b++;
        }else if (apt[b] <= applicant[a] - k){
            b++;
        }else{
            a++;
        }
    }

    cout << match;

    return 0;
}