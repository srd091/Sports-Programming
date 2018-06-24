/*
	Just For You 97116:)
*/

#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 2000005
#else
#define MAX 100000
#endif

int a[MAX],b[MAX];
char s[MAX],r[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx,mn;
	long long int sum,prod;
	vector<pair<int,int> > v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	count=0;
	for(int i=0;i<n;i++){
		if(count<=v[i].second)	count=v[i].second;
		else						count=v[i].first;
	}
	printf("%d\n",count);
	return 0;
}