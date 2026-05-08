#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    char A[N];

    scanf("%s",&A);



    int sum = 0;

    for(int i=0;i<N;i++){
        sum = sum + A[i] -48;
    }
    
    printf("%d",sum);
    return 0;
}