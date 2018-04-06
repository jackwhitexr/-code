/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char buf[85];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n=0;
    scanf("%d\n",&n);
    for(int t=0;t<n;t++){
        scanf("%s",buf);
        int flag=0;
        int len=strlen(buf);
        for(int p=1;p<len;p++){
            if(len%p==0){
                for(int j=p;j<len;j++){
                    if(buf[j]!=buf[j%p]){
                        flag=0;
                        break;
                    }
                    else flag=1;
                }
            }
            if(flag==1) {
                printf("%d\n",p);
                break;
            }
        }
        if(flag==0) printf("%d\n",len);
        if(t!=n-1) printf("\n");
    }

    return 0;
}
*/


