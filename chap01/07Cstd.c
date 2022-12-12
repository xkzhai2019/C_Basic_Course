#include <stdio.h>

int main(){

    /*
        gcc -std=c89 -pedantic-errors  报错指令
    */

    int a = 100, b = 200,c;
    c = a+b;
    printf("c=%d\n",c);

    float d = 23.5, e = 22.899, f;
    f = d + e;
    printf("f=%f\n",f);
    
    /*
    // C89报错
    // for(int i=0;i<2;i++){
    //     printf("%d\n",i);
    // }
    */
    /*
    printf("n=%d,c=%c,money=%f\n",n,c,money);
*/
    return 0;
}