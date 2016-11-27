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
    int t,n,m,i,j,k,l,x,y,z,flag,count,sum,a[105],d,mx,mn,prod;
    // char s[MAX],r[MAX];
    scanf("%d",&n);
    // scanf("%d%d",&n,&m);
    count=sum=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    y=x=a[0];
    a[0]=0;
    sort(a,a+n);
    while(1){
        if(a[n-1]>x){
            x++;
            a[n-1]--;
            sort(a,a+n);
        }
        else
            break;
    }
    if(a[n-1]==x)
        x++;
    printf("%d",x-y);
    return 0;
}
// 9 11