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
    int t,n,m,i,j,k,l,x,y,z,flag,count,sum,a[MAX],b[MAX],c[MAX],d,mx,mn,prod;
    char s[MAX],r[MAX];
    // scanf("%d",&n);
    scanf("%d%d",&n,&m);
    count=sum=0;
    scanf("%s",s);
    x=strlen(s);
    for(i=0;i<x;i++){
        if(s[i]=='G')
            j=i;

        if(s[i]=='T')
            k=i;
    }
    if(j>k){
        while(j>k){
            j-=m;
            if(s[j]=='#'){
                j=-1;
                break;
            }
        }
        if(j==k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else{
        while(j<k){
            j+=m;
            if(s[j]=='#'){
                j=-1;
                break;
            }
        }
        if(j==k) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}