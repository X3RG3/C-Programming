#include <stdio.h>
#include <string.h>
int main(){
    char S[100005];
    scanf("%s",&S);
    int len = strlen(S);
    int conC = 0;
    for(int i=0;i<len;i++){
        if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u'){
            conC++;
        }
    }
    printf("%d",conC);
    return 0;
}