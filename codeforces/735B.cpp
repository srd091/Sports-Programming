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
    int t,n,n1,n2,m,i,j,k,l,x,y,z,flag,a[MAX],b[MAX],c[MAX],d,mx,mn,prod;
    // scanf("%d",&n);
    long long int sum,count;
    scanf("%d%d%d",&n,&n1,&n2);
    count=sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    x=n1;
    y=n2;
    double ans;
    if(n1>n2){
        for(i=n-1;y>0;i--){
            y--;
            sum+=a[i];
        }
        for(j=i;x>0;j--){
            x--;
            count+=a[j];
        }
        ans=(double)sum/n2+(double)count/n1;
    }
    else{
        for(i=n-1;x>0;i--){
            x--;
            sum+=a[i];
        }
        for(j=i;y>0;j--){
            y--;
            count+=a[j];
        }
        ans = (double)sum/n1+(double)count/n2;
    }
    printf("%f",ans);
    return 0;
}
