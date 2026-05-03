#include <stdio.h>
#include <string.h>
int main(){
    char A[25],B[25];
    char temp;
    scanf("%s%s",A,B);
    printf("%d %d\n",strlen(A),strlen(B));

    char c[11];
    strcpy(c,A);

    printf("%s\n",strcat(A,B));

    temp = c[0];
    c[0] = B[0];
    B[0] =  temp;

    printf("%s %s",c,B);
    return 0;
}