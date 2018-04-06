/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
struct Cas{
    int w=0;
    int h=0;
}A[6];
int main(){
    //freopen("input.txt","r",stdin);
    for(int i=0;i<6;i++){
        A[i].w=0;
        A[i].h=0;
    }
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        //输入标准格式，否则会出错
        A[0].w=a>=b?b:a;
        A[0].h=a>=b?a:b;
        for(int i=1; i<6; i++) {
            scanf("%d%d",&a,&b);
            A[i].w=a>=b?b:a;
            A[i].h=a>=b?a:b;
        }
        //排序
        for(int i=0; i<6; i++) {
            for(int j=0; j<6-i-1; j++) {
                if(A[j].w>A[j+1].w ||A[j].w<=A[j+1].w &&A[j].h>A[j+1].h) {
                    int a=A[j].w;
                    int b=A[j].h;
                    A[j].w=A[j+1].w;
                    A[j].h=A[j+1].h;
                    A[j+1].w=a;
                    A[j+1].h=b;
                }
            }
        }
        /*for(int i=0; i<6; i++) {
            printf("%d %d\n",A[i].w,A[i].h);
        }
        if(A[0].w==A[1].w &&A[2].w==A[3].w &&A[4].w==A[5].w &&
                A[0].h==A[1].h &&A[2].h==A[3].h &&A[4].h==A[5].h) {
            if(A[0].w==A[2].w &&A[0].h==A[4].w &&A[2].h==A[4].h) {
                printf("POSSIBLE\n");
            } else {
                printf("IMPOSSIBLE\n");
            }
        } else{
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}*/
