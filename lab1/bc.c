#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("输入一个十进制数:");
   
   int n;
   int c[64],i=0;
   scanf("%d",&n);
   do{
       c[i++]=n%2;
       n=n/2;
   }while(n!=0);
   printf("对应的2进制数是：");
   
  int a=0;
   for (i--;i>=0;i--){
    if (c[i]>0)
    a++;
    printf("%d",c[i]);}
    
    printf("\n这个二进制数中1的个数：");
    printf("%d\n",a);
}