#include <stdio.h>
#include <string.h>
int main(){
    int T;
    scanf("%d",&T);
    
    while(T--){
        char S[100005];
        scanf("%s",S);
        int len = strlen(S);
        int sm=0,lr=0,dg=0;
        for(int i=0;i<len;i++){
            if(S[i] >= 'a' && S[i]<='z'){
                sm++;
            }
            else if(S[i] >= 'A' && S[i]<='Z'){
                lr++;
            }
            else if(S[i] >= '0' && S[i]<='9'){
                dg++;
            }
        }

        printf("%d %d %d\n",lr,sm,dg);
        
    }
    return 0;
}