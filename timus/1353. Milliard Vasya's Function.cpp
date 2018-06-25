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

int a[MAX];
char s[MAX],r[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,x,y,z,flag,d,mx,mn,count[82]={0};

	scanf("%d",&n);
	
	for(int i=0;i<=9;i++)	count[i]=1;
	
	for(int i=2;i<=9;i++)
		for(int sum=81;sum>0;sum--)
			for(int digit=1;digit<=9;digit++)
				if(sum>=digit)		count[sum]+=count[sum-digit];
	
	printf("%d\n",count[n]+(n==1));
	
	return 0;
}
