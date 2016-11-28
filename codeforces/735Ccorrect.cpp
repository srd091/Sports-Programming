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

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t,m,i,j,k,l,y,z,flag,count,sum,d,mx,mn,prod;
    long long int n,a[1005];
    scanf("%lld",&n);
    count=1;
    a[1]=2,a[2]=3;
    if(n==2)
        count=1;
    else{
        for(i=3;i<1001;i++){
            a[i]=a[i-1]+a[i-2];
            if(a[i]>n){
                count=i-1;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}
