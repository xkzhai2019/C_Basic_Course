#include <stdio.h>

int main(){
    int i;
    i = 3; // 3最终存放在内存中，程序终止后，3所占用空间被释放
    
    printf("i=%d\n",i);
    
    int j;
    
    printf("j=%d\n",j);
    return 0;
}