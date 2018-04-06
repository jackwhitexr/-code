/*#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int n=0;
    scanf("%d",&n);
        char s[85];
        for(int i=0;i<n;i++){
            scanf("%s",s);
            int add=0;
            int sum=0;
            if(s[0]=='O') add=1;
            else add=0;
            sum+=add;
            for(int i=1;i<strlen(s);i++){
                if(s[i]=='O') add+=1;
                else add=0;
                sum+=add;
            }
            printf("%d\n",sum);
        }

    return 0;
}*/
