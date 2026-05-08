#include <stdio.h>
int main(){
    char X[21],Y[21];
    scanf("%s",&X);
    scanf("%s",&Y);

    int cmp = strcmp(X,Y);

    if(cmp<0){
        printf("%s",X);
    }
    else if(cmp>0){
        printf("%s",Y);
    }
    else{
        printf("%s",X);
    }
    return 0;
}