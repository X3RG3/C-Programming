#include <stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);
    long long int A[N];
    for(int i=0;i<N;i++){
        scanf("%lld",&A[i]);
    }
    long long sum=0;
    for(int i=0;i<N;i++){
        sum+=A[i];
    }
    if(sum<0){
        printf("%lld",(-1) * sum);
    }
    else{
        printf("%lld",sum);
    }
    
    return 0;
}