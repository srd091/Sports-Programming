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
char s[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx,mn,r;
	long long int sum,prod;

	scanf("%d%d\n%s",&n,&k,s);
	k--;
	
	for(int i=k;i<n/2;i++)	if(s[i]!=s[n-i-1])	l=i;
	for(int i=k;i>=0;i--)	if(s[i]!=s[n-i-1])	r=i;
	count=0;
	if(k<n/2){
		for(int i=l;i<=r;i++)
			if(s[i]!=s[n-i-1])	count+=min(abs(s[i]-s[n-i-1]),26+s[n-i-1]-'a');
		
		count=miN(count+2*r-k-l,count+k+r-2*l);
	}else{
		for(int i=0;i<n/2;i++)	swap(s[i],s[n-i-1]);
		swap(l,r);
		for(int i=l;i<=r;i++)
			if(s[i]!=s[n-i-1])	count+=min(abs(s[i]-s[n-i-1]),26+s[n-i-1]-'a');
		
		count=miN(count+2*r-k-l,count+k+r-2*l);
	}
	
	printf("%d\n",count);
	return 0;
}
