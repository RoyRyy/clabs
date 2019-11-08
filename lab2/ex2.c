#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("输入一个十进制数:");
   
   int n=0;
   char b;
   int m=0;
   while (((b=getchar())!='\n')) {
   n=n*10+(b-'0');   }  
   if (n!=0);
   m=n;
    int c[32] ,i=0;                                           // scanf("%d",&n);
   do{
       c[i++]=m%2;
       m=m/2;
   }while(m!=0);
   printf("对应的2进制数是：");
   
  int a=0;
   for (i--;i>=0;i--){
    if (c[i]>0)
    a++;
    printf("%d",c[i]);}
    
    printf("\n这个二进制数中1的个数：");
    printf("%d\n",a);
}