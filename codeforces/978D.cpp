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

int a[MAX],b[MAX];
char s[MAX],r[MAX];
int test,n;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,m,k,l,x,y,z,d,flag=0,count;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	if(n<3) printf("0");
	else{
	    count=mod;
    	for(int i=-1;i<=1;i++){
    	    for(int j=-1;j<=1;j++){
    	        b[0]=a[0]+i,b[1]=a[1]+j;
    	        d=b[1]-b[0];
    	        z=abs(i)+abs(j);
    	        for(int k=2;k<n;k++){
    	            x=b[0]+k*d;
    	            if(abs(a[k]-x)>1){
    	                z=mod;
    	                break;
    	            }else if(x!=a[k])   z++;
    	        }
    	        count=min(z,count);
    	    }
    	}
    	if(count==mod)  count=-1;
    	printf("%d",count);
	}
	return 0;
}