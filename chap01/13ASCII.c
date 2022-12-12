// 日期：
// 功能：
// 目的：测试
 
#include <stdio.h>

int main(){
    char ch = 'A'; // ASCII 规定了不同字符是用哪个整数值表示 'A' --- 65  'a' --- 97
    //char ch2 = 'AB';
    //char ch3 = "A"; // 不能把字符串赋给单个字符

    //char ch = 'B'; // 不能重复定义
    ch = 'B';

    printf("%d\n",ch);
    
    printf("%#x\n",ch);
    
    return 0;
}

/* gcc 输出结果
----------------------------------
66
0x42
-------------------------、
*/