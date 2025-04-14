#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vector<string> grid;
vector<vector<bool>> visited;

void dfs(int x, int y){
    visited[x][y] = true;

    for (int i = 0; i < 4; i++){
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if (new_x >= 0 && new_y >= 0 && new_x < n && new_y < m){
            if(!visited[new_x][new_y] && grid[new_x][new_y] == '.'){
                dfs(new_x, new_y);
            }
        }
    }

}

int main(){
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m));

    for (int i = 0; i < n; i++){
        cin >> grid[i];
    }

    int rooms = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!visited[i][j] && grid[i][j] == '.'){
                dfs(i, j);
                rooms++;
            }
        }
    }

    cout << rooms;

    return 0;
}

