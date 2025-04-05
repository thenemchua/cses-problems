#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int res{0};
    int n;
    cin >> n;
 
    vector<int> nums(n-1);
    for (int i = 0; i < n-1; i++){
        cin >> nums[i];
    }
 
    sort(nums.begin(), nums.end());
 
    for (int i = 0; i < n; i++){
        if (i+1 != nums[i]){
            res = i+1;
            break;
        }
    }
 
    cout << res;
 
    return 0;
}