#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int C2 =0;
    int C3 =0;
    for(int i=0;i<N;i++){
        if(A[i]%2==0 && A[i]%3==0){
            C2++;
        }
        else if(A[i]%2==0){
            C2++;
        }
        else if(A[i]%3 == 0){
            C3++;
        }
    }

    printf("%d %d",C2,C3);
    return 0;
}