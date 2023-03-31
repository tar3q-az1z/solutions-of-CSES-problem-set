#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<set>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<functional>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define newline cout << ln
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)
 
// cses : Message Route - graph
 
vector<vi> gp;
 
void bfs_route(int n){
	queue<int> q;
	vector<bool> vis(n, false);
	q.push(1);
	vis[1] = true;
	
	vector<int> level(n);
	level[1] = 0;
	vector<vi> parent(n);
	
	while(!q.empty()){
		int u = q.front();
		for(int i = 0; i < gp[u].size(); ++i){
			int v = gp[u][i];
//			parent[v].pb(u);
			if(!vis[v]){
				parent[v].pb(u);
				if(v == n - 1){
					cout << level[u] + 2 << ln;
					vi net;
					net.pb(n - 1);
					for(int i = n - 1; i != 1; i = parent[i][0]){
						net.pb(parent[i][0]);
					}
					for(auto it = net.rbegin(); it != net.rend(); ++it){
						cout << *it << " ";
					}
					newline;
					return;
				}
				vis[v] = true;
				q.push(v);
				level[v] = level[u] + 1;
			}
		}
		q.pop();
	}
	cout << "IMPOSSIBLE\n";
	return ;
}
 
int main(){
	fastios;
	int n, m, a, b;
	cin >> n >> m;
	gp.resize(n + 1);
	for(int i = 0; i < m; ++i){
		cin >> a >> b;
		gp[a].pb(b);
		gp[b].pb(a);
	}
	
	bfs_route(n + 1);
	
	return 0;
}
 