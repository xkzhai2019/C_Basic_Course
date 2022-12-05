#include <stdio.h>
#include <math.h>  // gcc编译需加入-lm参数，因为gcc默认指定头文件对应的库文件中不包括math库，需手动指定到math库

int main(void){
    // 把三个系数保存到计算机中
    int a = 1; // =不表示相等,而表示赋值
    int b = 3;
    int c = 2;

    double delta; // delta存放b*b - 4ac
    double x1;
    double x2; //存放一元二次方程的两个解

    delta = b*b - 4*a*c;

    if(delta>0){
        // 两个解
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("two solution:x1 = %f, x2 = %f\n",x1,x2);
    }
    else if (delta==0){
        x1 = (-b) / (2*a);
        x2 = x1; // 右边赋值给左边
        printf("only one solution: x1 = x2 = %f\n",x1);
    }
    else 
    {
        printf("no solution\n");
    }

    return 0;
}
