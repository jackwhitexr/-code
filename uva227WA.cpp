/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char buf[5][5];
char jud[10];
int n=1;
int start=0;
void printResult(int flag){
    printf("Puzzle #%d:\n",n++);
    if(flag) {
        for(int i=0; i<5; i++) {
            for(int j=0; j<5; j++) {
                printf("%c",buf[i][j]);
                if(j!=4) printf(" ");
            }
            printf("\n");
        }
    } else printf("This puzzle has no final configuration.\n");
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(gets(jud)){
        int flag=1;
        if(jud[0]=='Z') break;
        if(strlen(jud)>5) flag=0;
        if(start==1) printf("\n");
        start=1;
        int blank_x=0,blank_y=0;
        for(int j=0; j<5; j++) {
            buf[0][j]=jud[j];
        }
        for(int i=1;i<5;i++){
            gets(jud);
            if(strlen(jud)>5){
                flag=0;
            }
            for(int j=0; j<5; j++) {
                buf[i][j]=jud[j];
                if(buf[i][j]==' ') {
                    blank_x=i;
                    blank_y=j;
                }
            }
        }

        //debug
        /*for(int i=1; i<5; i++) {
            for(int j=0; j<5; j++) {
                scanf("%c",&buf[i][j]);
                if(buf[i][j]==' ') {
                    blank_x=i;
                    blank_y=j;
                }
            }
            getchar();
        }*/
        /*for(int i=0; i<5; i++) {
                for(int j=0; j<5; j++) {
                    printf("%c ",buf[i][j]);
                }
                printf("\n");
            }*/
        //debug

    //original input command line
     /*   char op[100];
        char temp[100];
        scanf("%s",op);
        if(op[strlen(op)-1]!='0') {
            while(true) {
                scanf("%s",temp);
                strcat(op,temp);
                if(temp[strlen(temp)-1]=='0') break;
            }
        }
        getchar();*/
        /*char t;
        int k=0;
        while(true){
            scanf("%c",&t);
            if(t=='\n') {continue;}
            else if(t=='0') {
                op[k++]=t;
                char pass[10];
                t=getchar();
                if(t!='\n')scanf("%s",pass);
                break;
            }
            else op[k++]=t;
        }*/

        //printf("%s %d\n",op,strlen(op));
        //operation start

     /*   for(int i=0; i<strlen(op); i++) {
            if(op[i]=='A') {
                if(blank_x==0) {
                    flag=0;
                    break;
                } else {
                    buf[blank_x][blank_y]=buf[blank_x-1][blank_y];
                    buf[blank_x-1][blank_y]=' ';
                    blank_x=blank_x-1;
                }
            } else if(op[i]=='B') {
                if(blank_x==4) {
                    flag=0;
                    break;
                } else {
                    buf[blank_x][blank_y]=buf[blank_x+1][blank_y];
                    buf[blank_x+1][blank_y]=' ';
                    blank_x=blank_x+1;
                }
            } else if(op[i]=='L') {
                if(blank_y==0) {
                    flag=0;
                    break;
                } else {
                    buf[blank_x][blank_y]=buf[blank_x][blank_y-1];
                    buf[blank_x][blank_y-1]=' ';
                    blank_y=blank_y-1;
                }
            } else if(op[i]=='R') {
                if(blank_y==4) {
                    flag=0;
                    break;
                } else {
                    buf[blank_x][blank_y]=buf[blank_x][blank_y+1];
                    buf[blank_x][blank_y+1]=' ';
                    blank_y=blank_y+1;
                }

            } else if(op[i]=='0'){break;}
            else {flag=0;break;}
        }
        //printf result
        printResult((flag));
   }
    return 0;
}*/
