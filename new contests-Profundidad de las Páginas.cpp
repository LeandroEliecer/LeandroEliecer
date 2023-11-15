//Profundidad de las Páginas
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int maxn = 51;
vector <int> adj[maxn];
int depth[maxn];

void bfs(int n){
    bool visitado[maxn] = {false};
    queue<int> q;
    visitado[n] = true;
    depth[n] = 1;
    q.push(n);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int x: adj[u]){
            if(!visitado[x]){
                visitado[x] = true;
                depth[x] = depth[u] + 1;
                q.push(x);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, l, q, a, b, p;
    cin >> t;

    while(t--){
        cin >> n >> l >> q;

        for(int i = 1; i <= n; i++){
            depth[i] = -1;
            adj[i].clear();
        }

        for(int i = 1; i <= l; i++){
            cin >> a >> b;
            adj[a].push_back(b);
        }
        bfs(1);
        while(q--){
            cin >> p;
            cout << depth[p] << '\n';
        }
    }
return 0;
}
