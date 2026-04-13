#include <stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("Cox'sBazar Jabo \n");
        if(tk >= 10000){
            printf("Saint Martin Jabo \n");
        }
        else{
            printf("Saint martin Jabo Na \n");
        }
    }
    else{
        printf("Kothaoo Jabo Na \n");
    }
}