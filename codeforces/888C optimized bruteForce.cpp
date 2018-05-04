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
char s[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int i,t,n,m,k,l,r,mid,x,y,z,flag,count,d,mx,mn;
	long long int sum,prod;
    
	scanf("%s",s);
	n=strlen(s);
	if(n%2) y=(n+1)/2;
	else    y=n/2+1;
	for(int j=0;j<26;j++){
	    x=-1,z=-1;
	    for(int i=0;i<n;i++){
	        if(s[i]=='a'+j){
	            if(x==-1){
	                x=i;
	                z=i+1;
	                continue;
	            }   
	            z=max(i-x,z);
	            x=i;
	        }
	    }
	    z=max(n-x,z);
	    if(z>0)   y=min(y,z);
	}
	printf("%d\n",y);
	
	return 0;
}