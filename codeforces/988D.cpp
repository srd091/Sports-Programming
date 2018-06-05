/*
	Just For You 97116:)
*/

#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define mad -1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))
#define MAX 200005

int a[MAX],test;

int main(){
	
	int i,j,n,prod[31];
    set<int> s;
	
	prod[0]=1;
	for(i=1;i<31;i++)	prod[i]=prod[i-1]*2;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s.insert(a[i]);
	}

	//	_2^x_2^x_
	for(i=0;i<n;i++){
		for(j=0;j<31;j++){
    			if((a[i]+prod[j])<mod && (a[i]-prod[j])>mad && s.count(a[i]+prod[j]) && s.count(a[i]-prod[j])){
    				printf("3\n%d %d %d",a[i]-prod[j],a[i],a[i]+prod[j]);
    				return 0;
		    }
		}
	}
	
	//	_2^x_
	for(i=0;i<n;i++){
		for(j=0;j<31;j++){
    			if((a[i]+prod[j])<mod && s.count(a[i]+prod[j])){
    				printf("2\n%d %d",a[i],a[i]+prod[j]);
    				return 0;
		    }
		}
	}	
	printf("1\n%d\n",a[0]);
	return 0;
}