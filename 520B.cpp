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
	count=0;
	scanf("%d%d",&n,&m);
	if(m<n)
		count=n-m;
	else{
		while(n!=m){
			if(m%2==1)
				m++;
			else
				m/=2;
			count++;

			if(m<n){
				count+=n-m;
				break;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}