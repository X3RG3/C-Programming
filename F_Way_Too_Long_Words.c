#include <stdio.h>
#include <string.h>
int main(){
    
    int T;
    
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        char s[108];
        scanf("%s",s);
        int len = strlen(s);
        if(len<=10){
            printf("%s\n",s);
        }
        else{
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }
       
    }
    return 0;
}