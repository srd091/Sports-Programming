/*
	Just For You 97116:)
*/

#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define multiplier  100000000000
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 2000005
#else
#define MAX 100000
#endif

long long int a[MAX],b[MAX],sum[MAX];
char s[MAX],r[MAX];
int test;

long long int binarySearch(int n, long long int x){
    int l=1,r=n,mid;
    while(l<r){
        mid=(l+r)/2;
        if(sum[mid]==x) return (mid*multiplier+x-sum[mid-1]);
        else if(sum[mid]>x) r=mid;
        else                l=mid+1;
    }
    return (l*multiplier+x-sum[l-1]);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,z,flag,count,d,mx,mn;
	long long int x,y;
	
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		sum[i+1]+=sum[i]+a[i];
	}
	for(int i=0;i<m;i++){
		scanf("%lld",&x);
		y=binarySearch(n,x);
	    printf("%lld %lld\n",(y-y%multiplier)/multiplier,y%multiplier);
	}
// 	d*multiplier+r
	return 0;
}