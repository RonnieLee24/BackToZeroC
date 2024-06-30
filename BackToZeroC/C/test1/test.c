#include <stdio.h>
#include "max.h"    //  引用自己的头文件（使用双引号）
int main(){
    int a = 10;
    int b = 100;
    int c = Max(a, b);
    printf("%d\n", c);
    printf("hello world!!!");
    return 1;
}