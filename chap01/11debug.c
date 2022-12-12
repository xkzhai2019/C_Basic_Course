#include <stdio.h>
int main(){
    const int c = 33; // read only, assign value only if initialize
    // c = 45;
    int var1 = 2345;
    
    printf("please input score");
    scanf("%d",var1);

    int s = 8;
    switch (var1/10)
    {
        case 10:
            printf("满分");
            break;
        case 9:
            printf("good");
            break;
    }

    printf("number is %d\n",var1);
    return 0;
}