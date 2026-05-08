#include <stdio.h>
#include <string.h>
int main(){
    char S[10000005];
    scanf("%s",S);
    int calp[26];
    for(int i=0;i<26;i++){
        calp[i]= 0;
    }
    int len = strlen(S);
    for(int i=0;i<len;i++){
        if(S[i] >='a' && S[i]<='z'){
        calp[S[i]-97]++;
        }
    }
        int c = 0;
    for(int i=0;i<26;i++){

        if(calp[i]!=0){
            printf("%c : %d\n",c+97 ,calp[i]);
        }
        c++;
    }
    return 0;
}