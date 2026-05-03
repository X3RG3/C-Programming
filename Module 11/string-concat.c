#include <stdio.h>
#include <string.h>
int main(){
    char s1[21], s2[21];
    scanf("%s %s",&s1,&s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
 

    for(int i=0;i<=len2;i++){
        s1[i+len1] = s2[i];
    }

    printf("S1 = %s \ns2 = %s",s1,s2);

    return 0;
}