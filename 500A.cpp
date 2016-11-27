#include <bits/stdc++.h>
using namespace std;
#define MAX (int)10e5+5
// adjacency list, adj[i] contains all neighbours of i
// vector<int> adj[MAX];
// vector<bool> vis[MAX];
// int cnt;
// void dfs(int v){
//     vis[v]=true;
//     cnt++;
// 	// traverse over all children
// 	for(int i=0;i<adj[v].size();i++){
// 		if(!visited(adj[v][i]))
// 			dfs(adj[v][i]);
// 	}
// }

int main(){
	// freopen("input.txt","r",stdin);
	int t,n,m,j,k,x,y,count,sum,u,v;
	vector<int> a;
	scanf("%d%d",&n,&t);
	for(int i=0;i<n-1;i++){
		scanf("%d",&x);
		a.push_back(x);
	}
	
	int i=0;
	t--;
	while(i<t){
		i+=a[i];
	}

	if(i==t)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}