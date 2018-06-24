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

	scanf("%s",s);
	n=strlen(s);
	s[n]='2';
	for(int i=0;i<=n;i++){
	    count=-1;
		for(int j=i+1;j<=n;j++){
			if(s[i]!=s[j])  break;
			count++;
		}
		if(count>0){
		    for(int j=i+2;j<i+2+count;j++) s[j]='1';
		    i+=count;
		}
	}
	for(int i=0,j=0;i<n;i++)
		if(s[i]!='1')	r[j++]=s[i];
	
// 	printf("%s\n",r);
	n=strlen(r);
	count=flag=0;
	for(int i=1;i<n;i++){
		if(r[i]==r[i-1] && flag==1){
			r[i]='1';
			flag=0;
			count=0;
		}
		if(r[i]==r[i-1] && flag==0)	flag=1,count=0;
		if(r[i]!=r[i-1])    count++;
		if(count>1){
		    flag=0;
		    count=0;
		}
	}
	for(int i=0;i<n;i++){
		if(r[i]!='1'	)	printf("%c",r[i]);
	}
	return 0;
}