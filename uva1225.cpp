/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int cnt[10];
char cas[20000000];
char buf[10005];
int main(){
    //freopen("input.txt","r",stdin);
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        memset(cas,0,sizeof(cas));
        memset(cnt,0,sizeof(cnt));
        memset(buf,0,sizeof(buf));
        for(int j=1; j<=t; j++) {
            sprintf(buf,"%d",j);
            strcat(cas,buf);
        }
        //printf("%s\n",cas);
        for(int k=0;k<strlen(cas);k++){
            int mark=cas[k]-'0';
            cnt[mark]++;
        }
        for(int p=0;p<10;p++){
            printf("%d",cnt[p]);
            if(p!=9) printf(" ");
        }
        printf("\n");
        //printf("%s",cas);
    }


    return 0;
}*/

