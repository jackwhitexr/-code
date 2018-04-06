/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
//shit一样的代码
double A[4]={12.01,1.008,16.00,14.01};
int mass[4]={0,0,0,0};
int getVal(char c){
    if(c=='C') return 0;
    else if(c=='H') return 1;
    else if(c=='O') return 2;
    else if(c=='N') return 3;
}
char com[1000];
int main(){
    //freopen("input.txt","r",stdin);
    int n=0;
    scanf("%d\n",&n);
    for(int j=0;j<n;j++){
        memset(mass,0,sizeof(mass));
        double ans=0.0;
        scanf("%s",com);
        int mark=0;
        for(int i=0;i<strlen(com);){
            int cnt=1;
            if(isdigit(com[i])){
                int a=com[i]-'0';
                if(isdigit(com[i+1])){
                    int b=com[i+1]-'0';
                    cnt=a*10+b;
                    i+=2;
                }
                else{
                    cnt=a;
                    i+=1;
                }
                if(mass[mark]<1)
                    mass[mark]=cnt;
                else
                    mass[mark]+=cnt;
            }
            else{
                mark=getVal(com[i]);
                if(i==strlen(com)-1||!isdigit(com[i+1])){
                      mass[mark]+=1;
                }
                i+=1;
            }
        }
        for(int i=0;i<4;i++){
            //printf("%d ",mass[i]);
            ans+=mass[i]*A[i];
        }
        printf("%.3lf\n",ans*1.00);
    }
    return 0;
}*/
