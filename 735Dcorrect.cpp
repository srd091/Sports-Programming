/*
    Just For You 97116:)
*/

#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define MAX 200005
#define maX(a,b)        ((a)>(b)?(a):(b))
#define miN(a,b)        ((a)<(b)?(a):(b))

int prime(long long int n){
    long long int x = sqrt(n);
    if(n%2==0)
        return 0;
    for(int i=3;i<=x;i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t,m,i,j,k,l,flag,sum,a[MAX],b[MAX],c[MAX],d,mx,mn,prod;
    long long int n,x,y,z,count;
    // scanf("%d",&n);
    scanf("%lld",&n);
    x=n;
    count=sum=0;
    if(n%2==0){
        if(n==2)
            printf("1\n");
        else
            printf("2\n");
    }
    else{
        if(prime(n))
            printf("1\n");
        else if(prime(n-2))
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}