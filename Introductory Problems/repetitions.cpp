#include <bits/stdc++.h>
using namespace std;

int main(){
    int max_len{1}, n{1};
    char c;
    char curr;

    cin >> curr;

    while (cin >> c){
        if (c == curr){
            n++;
        }else{
            curr = c;
            n = 1;
        }

        if (n > max_len){
            max_len = n;
        }
    }

    cout << max_len;

    return 0;
}