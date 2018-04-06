#include<bits/stdc++.h>
//瑞瑞的0-1背包板子
using namespace std;
#define N 1000

int n,W;
int w[N];
int v[N];
int dp[N][N];

int main(){
    freopen("input.txt","r",stdin);
    while(scanf("%d%d",&n,&W)!=EOF && n!=0 &&w!=0){
        memset(dp,0,sizeof(dp));
        memset(w,0,sizeof(w));
        memset(v,0,sizeof(v));
        for(int i=1;i<=n;i++) {
            scanf("%d%d",&w[i],&v[i]);
        }
        for(int i=1;i<=n; i++) {
            for(int j=1;j<=W; j++) {
                if(j-w[i]>=0) {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
                }
                else {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        for(int i=1; i<=n; i++) {
            for(int j=0;j<=W; j++) {
                printf("%d ",dp[i][j]);
            }
            printf("\n");
        }
        printf("%d\n",dp[n][W]);
    }

    return 0;
}
