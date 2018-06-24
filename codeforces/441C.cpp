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

	
	scanf("%d%d%d",&n,&m,&k);
	if(k==1)	{
		z=n*m;
		printf("%d ",z);
		x=1,y=1;
		while(z--){
			printf("%d %d ",x,y);
			if(y==m && x%2){
				x++;
				continue;
			}else if(y==1 && x%2==0){
				x++;
				continue;
			}
			if(x%2)	y++;
			else		y--;		
		}
	}else{
		z=n*m-(k-1)*2;
		printf("%d ",z);
		x=1,y=1;
		while(z--){
			printf("%d %d ",x,y);
			if(y==m && x%2){
				x++;
				continue;
			}else if(y==1 && x%2==0){
				x++;
				continue;
			}
			if(x%2)	y++;
			else		y--;		
		}
		printf("\n");
		for(int i=1;i<k;i++){
			z=2;
			printf("%d ",z);
			while(z--){
				printf("%d %d ",x,y);
				if(y==m && x%2){
					x++;
					continue;
				}else if(y==1 && x%2==0){
					x++;
					continue;
				}
				if(x%2)	y++;
				else		y--;		
			}
			printf("\n");
		}
	}
	return 0;
}
