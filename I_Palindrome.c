#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    char s[1001];
    scanf("%s",&s);
    int i=0,j=0;
    bool ispal = true;
    j = strlen(s) -1;
    while(i<j){
        if(s[i]!=s[j]){
            ispal = false;
        }
        i++;
        j--;
    }

    if(ispal){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}