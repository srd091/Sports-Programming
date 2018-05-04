#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int v,a[100],b[100],n,sum=0,z=0;
	scanf("%d%d",&n,&v);
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    z+=a[i];
	}
	
	for(int i=0;i<n;i++)
	    scanf("%d",&b[i]);
	    
	double l=0,r=v,mid,x=0;
	
	while(r-l>1e-8){
	    x=0;
	    int flag=0;
	    mid=(l+r)/2;
	    for(int i=0;i<n;i++){
	        if(mid*a[i]>b[i]){
	            flag=1;
	            break;
	        }
	        x+=mid*a[i];
	    }
	    if(x>v)     flag=1;
	    if(flag)    r=mid;
	    else        l=mid;
	}
	mid=(l+r)/2,x=0;
	for(int i=0;i<n;i++)    x+=a[i]*mid;
	printf("%lf",x);
	return 0;
}
