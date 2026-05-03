#include <stdio.h>
#include <string.h>
int main(){
    char s1[21], s2[21];
    scanf("%s %s",&s1,&s2);

    int len = strlen(s1);
    printf("Before Copy : \n");

    printf("S1 = %s \ns2 = %s\n",s1,s2);

    for(int i=0;i<=len;i++){
        s1[i] = s2[i];
    }

    printf("After Copy : \n");
    printf("S1 = %s \ns2 = %s",s1,s2);

    return 0;
}