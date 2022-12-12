#include <stdio.h>

int main(){

    int n = 100;
    char c = '@';
    float money = 93.96;
    
    
    // C89报错
    for(int i=0;i<2;i++){
        printf("%d\n",i);
    }
    
    
    printf("n=%d,c=%c,money=%f\n",n,c,money);


    return 0;
}