#include <stdio.h>
#include <string.h>
int main(){
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        char S[51];
        char T[51];
        scanf("%s%s",&S,&T);
        int lenS = strlen(S);
        int lenT = strlen(T);
        int j=0;
        for(j;j<lenS && j<lenT;j++){
            printf("%c%c",S[j],T[j]);
        }
        if(lenS > lenT){
            for(int i=j;i<lenS;i++){
                printf("%c",S[i]);
            }
        }
        else if(lenS < lenT){
            for(int i=j;i<lenT;i++){
                printf("%c",T[i]);
            }
        }
        printf("\n");

    }
    return 0;
}