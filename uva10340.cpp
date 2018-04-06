/*#include <cstdio>
#include <cstring>
#include <iostream>
#define N 100005
using namespace std;
char A[N],B[N];
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%s %s",B,A)!=EOF){
        //printf("%s %s\n",A,B);
        int i=0,j=0;
        while(i<strlen(A)&&j<strlen(B)) {
            if(A[i]!=B[j]) i++;
            else if(A[i]==B[j]) {
                j++;i++;
            }
        }
        if(j==strlen(B)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}*/


