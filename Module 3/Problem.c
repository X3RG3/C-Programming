#include <stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    int dg = X/1000;
    if(dg%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}