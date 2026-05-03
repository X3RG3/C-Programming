#include <stdio.h>
#include <stdbool.h>
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    bool isPal = true;

    for(int i=0,j=N-1;i<j;i++,j--){
        if(a[i]!=a[j]){
            isPal = false;
        }
    }

    if(isPal){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}