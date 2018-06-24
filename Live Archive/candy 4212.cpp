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

int a[MAX],dp[MAX],b[MAX];
char s[MAX],r[MAX];
int test;

void clear(int n){
	for(int i=0;i<n;i++)		dp[i]=0;
	return;	
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx,mn;
	long long int sum,prod;

    while(true){
	    	scanf("%d%d",&m,&n);
	    	if(n+m==0)  break;
	    	clear(n);
	    	for(int i=0;i<m;i++){
	    		for(int j=0;j<n;j++)
	    			scanf("%d",&a[j]);
	    		
	    		clear(n);
	    		dp[0]=a[0],dp[1]=max(a[0],a[1]);
	    		for(int j=2;j<n;j++)
	    			dp[j]=max(a[j]+dp[j-2],dp[j-1]);

	    		b[i]=dp[n-1];
	    	}

	    	clear(n);
	    	dp[0]=b[0],dp[1]=max(b[0],b[1]);
	    	for(int i=2;i<m;i++)
	    	    dp[i]=max(b[i]+dp[i-2],dp[i-1]);   

	    	printf("%d\n",dp[m-1]);
	    	clear(m);
    }
	return 0;
}
