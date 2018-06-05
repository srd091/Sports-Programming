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
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx=-INT_MAX,mn=INT_MAX;
	long long int sum,prod;
	
	scanf("%d%d",&n,&m);
	flag=1,x=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		x+=a[i];
		mn=min(x,mn),mx=max(x,mx);
	}
	if(mn<0){
	    if(mx<0){
	        if(abs(mn)>m)   printf("0");
	        else            printf("%d",m-abs(mn)+1);
	    }else{
	        if(mx>m)    printf("0");
	        else{
	            if(m-mx<abs(mn))    printf("0");
	            else                printf("%d",m-mx-abs(mn)+1);
	        }
	    }
	}else{
	    if(mx>m)    printf("0");
	    else        printf("%d",m-mx+1);
	}
	return 0;
}