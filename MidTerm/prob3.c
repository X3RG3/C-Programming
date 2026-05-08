#include <stdio.h>
int main(){
    int T;
    scanf("%d",&T);

    while(T--){
        int m1,m2,d;
        scanf("%d%d%d",&m1,&m2,&d);
        int work = m1 *d;
        int nd = work/(m1+m2);
        printf("%d\n",d-nd);
    }
    return 0;
}