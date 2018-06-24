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

long long int a[MAX];
char s[MAX],r[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n=0,m,k,l,x,y,z,flag=1,count,d,mx,mn;
	long long int sum=0,prod;
    char c;
    
    while(scanf("%c",&c)!=EOF){
        if(c>='0'&&c<='9')  sum=sum*10+(c-'0'),flag=0;
        else{
            if(flag==1) continue;
            flag=1;
            a[n]=sum;
            n++;
            sum=0;
        }
        // scanf("%c",&c);
        // printf("%c",c);
    }
    if(!flag)   a[n]=sum;
    else    n--;
    // printf("\nn=%d\n",n);
    for(int i=n;i>=0;i--)
    	printf("%.4lf\n",sqrt(a[i]));

	return 0;
}
