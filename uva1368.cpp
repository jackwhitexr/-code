/*#include <cstdio>
#include <cstring>
#include <iostream>
#define N 1005
using namespace std;
//DNA序列
char DNA[N][N];
int hamming;
int m,n;
char getDNA(int j){
    char returnDNA;
    int num[4]={0,0,0,0};
    //搜索j位置出现次数最多的字母
    for(int i=0;i<m;i++){
        if(DNA[i][j]=='A') num[0]++;
        else if(DNA[i][j]=='C') num[1]++;
        else if(DNA[i][j]=='G') num[2]++;
        else if(DNA[i][j]=='T') num[3]++;
    }
    int temp=0;
    int tq=0;
    //逆序保证字典序
    for(int q=3;q>=0;q--){
        if(num[q]>=temp) {
            temp=num[q];
            tq=q;
        }
    }
    if(tq==0) returnDNA='A';
    else if(tq==1) returnDNA='C';
    else if(tq==2) returnDNA='G';
    else if(tq==3) returnDNA='T';
    for(int p=0;p<m;p++){
        if(DNA[p][j]!=returnDNA)
            hamming++;
    }
    return returnDNA;
}

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t=0;
    while(scanf("%d",&t)!=EOF){
        while(t--){
            scanf("%d%d",&m,&n);
            for(int i=0; i<m; i++) {
                scanf("%s",DNA[i]);
            }
            //start
            char ans[N];
            hamming=0;
            for(int j=0; j<n; j++) {
                ans[j]=getDNA(j);
                putchar(ans[j]);
            }
            printf("\n%d\n",hamming);
    }
    return 0;
}*/



