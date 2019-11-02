#include <stdio.h>

int main()
{
    int max_int = (1<<31) - 1;    //第一位是符号位
    printf("The max value of int on 32 machine: %d\n", max_int);  

    unsigned int max_uint = 0 - 1;  //补码 -1 和 max - 1是一样的表示方式
    printf("The max value of unsigned int on 32 machine: %u\n", max_uint); 
} 
