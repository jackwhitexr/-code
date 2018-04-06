/*#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#define N 10005
using namespace std;
int A[N];
int Q[N];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,q;
    int t=1;
    while(scanf("%d%d",&n,&q)!=EOF&& n!=0&&q!=0){
        printf("CASE# %d:\n",t);
        memset(A,0,sizeof(A));
        memset(Q,0,sizeof(Q));
        for(int i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        sort(A,A+n);
        for(int i=0;i<q;i++){
            scanf("%d",&Q[i]);
        }
        for(int i=0;i<q;i++){
            int mark=-1;
            int num=-1;
            num=Q[i];
            for(int j=0;j<n;j++){
                if(Q[i]==A[j]){
                    mark=j;
                    break;
                }
            }
            if(mark==-1) printf("%d not found\n",num);
            else printf("%d found at %d\n",num,mark+1);
        }
        t++;
    }
    return 0;
}
*/
