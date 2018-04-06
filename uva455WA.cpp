/*#include<cstdio>
#include<cstring>
#define N 6
using namespace std;

int A[N]={0,1,2,3,4,5};
void display(){
    for(int i=0;i<N;i++){
        printf("%d",A[i]);
        if(i!=N-1) printf(" ");
    }
    printf("\n");
}
int HeapPermute(int n){
    if(n==1)
        display();
    else{
        for(int i=0; i<n; i++){
            HeapPermute(n-1);

            if(n%2==0) {
                int t=A[1];
                A[1]=A[n];
                A[n]=t;
            } else{
                int t=A[i];
                A[i]=A[n];
                A[n]=t;
            }
        }
    }

}
int main(){
    HeapPermute(3);
}*/
