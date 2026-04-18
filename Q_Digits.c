// #include <stdio.h>
// int main(){
//     int T;
//     scanf("%d",&T);
//     int X;
//     for(int i=0;i<T;i++){
//         scanf("%d",&X);
//         if(X==0){
//             printf("%d\n",X);
//         }
//         while(X!=0){
//             printf("%d ",X%10);
//             X=X/10;
           
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int X;
    for(int i=0;i<T;i++){
        scanf("%d",&X);
        
        do{
            printf("%d ",X%10);
            X=X/10;
           
        }while(X!=0);
        printf("\n");
    }
    return 0;
}