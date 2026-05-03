#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int ln= A[0];
    int ind =0;
    for(int i=0;i<N;i++){
        if(A[i]<ln){
            ln = A[i];
            ind = i;
        }
    }
    printf("%d %d",ln,ind+1);

    return 0;
}