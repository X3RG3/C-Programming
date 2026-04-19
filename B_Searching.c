#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int X;
    scanf("%d",&X);
    int indx=-1;
    for(int i=0;i<N;i++){
        if(X==A[i]){
            indx = i;
            break;
        }
    }
    printf("%d",indx);
    return 0;
}