#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define mod97 1000000007
#define sd(n) scanf("%d",&n)
#define pb(n) push_back(n)

// adjacency list, adj[i] contains all neighbours of i
vector<int> adj[MAX];
bool vis[MAX];
long long int size=0;

void dfs(int v){
    vis[v]=true;
	// traverse over all children
	size++;
	for(int i=0;i<adj[v].size();i++){
		if(!vis[adj[v][i]])
			dfs(adj[v][i]);
	}
	return;
}

int main(){
	// freopen("input.txt","r",stdin);
	int t,n,m,j,k,x,y,count,u,v;
	long long int sum;
	sd(t);
	while(t--){
		sum=1,count=0;
		sd(n),sd(m);
		for(int i=0;i<=n;i++)
			vis[i]=false;

		for(int i=0;i<m;i++){
			sd(u),sd(v);
			adj[u].pb(v);
			adj[v].pb(u);
		}
		for(int i=1;i<=n;i++){
			if(vis[i]==false){
				size=0,count++;
				dfs(i);
				sum*=size;
				sum%=mod97;
			}
		}
		printf("%d %lld\n",count,sum);
		for(int i=0;i<=n;i++)
			adj[i].clear();
	}
	return 0;
}
