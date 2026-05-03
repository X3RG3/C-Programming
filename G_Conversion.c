#include <stdio.h>
int main(){
    char s[100001];
    scanf("%s",&s);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>= 65 && s[i]<=91){
            s[i]=s[i]+32;
        }
        else if(s[i]>= 97 && s[i]<=123){
            s[i]=s[i]-32;
        }
        if(s[i]==','){
            s[i]= ' ';
        }
        printf("%c",s[i]);

        i++;

    }   
    return 0;
}