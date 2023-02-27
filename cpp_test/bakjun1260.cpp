//
//  problems.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/26/23.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 백준 1260
int visited [1001];
vector<int> network[1001];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";
        
        for (int i = 0; i < network[x].size(); i++){
            int y = network[x][i];
            if (!visited[y]) {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}


int main_bj_1260() {
    int N, M, V, x, y;
    
    cin >> N >> M >> V;
    
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        network[x].push_back(y);
        network[y].push_back(x);
    }
    
    bfs(V);
    
    return 0;
}
