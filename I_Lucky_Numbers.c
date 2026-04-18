#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    
    if((N%10)!=0 && (N/10)%(N%10)==0 ){
        printf("YES");
    }
    else if((N/10)!=0 && (N%10)%(N/10)==0 ){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}