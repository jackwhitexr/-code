/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int A[3000];
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        memset(A,0,sizeof(A));
        int chu=a,beichu=b;
        int flagzc=0; //除尽标志 为1整除
        int flag=1; //周期标志 为0无周期
        int z=a/b;
        int n=0;
        while(n<3000) {
            if(a%b==0) {
                flagzc=1;
                break;
            }
            a=a%b*10;
            A[n++]=a/b;
        }
        int zq=0; //周期
        int start=0; //循环开始点
        int k;
        for(int s=0; s<n/2; s++) {
            for(int p=1; p<n/2; p++) {
                flag=1; //周期标志 为0无周期
                for(k=p; k+s<n; k++) {
                    if(A[k+s]!=A[(k%p+s)]) {
                        flag=0; //周期失败
                        break;
                    }
                }
                if(flag==1) {
                    zq=p;
                    start=s;
                    break;
                }
                //else printf("偏移%d,周期%d失败\n",s,p);
            }
            if(flag==1) break;
        }
        printf("%d/%d = %d.",chu,beichu,z);
        if(flagzc==1) {
            for(int i=0; i<n; i++) printf("%d",A[i]);
            printf("(0)\n   1 = number of digits in repeating cycle\n\n");
        }
        else{
            for(int i=0; i<=start+zq; i++) {
                if(i==start) printf("(");
                else if(i==start+zq) {printf(")"); break;}
                else if(i==50){printf("...)"); break;}
                printf("%d",A[i]);
            }
            printf("\n   %d = number of digits in repeating cycle\n\n",zq);
        }

    }
    return 0;
}*/

