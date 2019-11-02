 #include <stdio.h>
  
  int main()
  {
     unsigned int a = 1, b = 0;
     while (a>0)
     {
          a=a+1;
      }
     
     printf("unsigned int数据类型最大数是：%u\n", a-1 );
 
     unsigned int n = a - 1;
     do
     {
         n = n / 10;
         b=b+1;
     } while (n > 0);
     printf("unsigned int数据类型最大数共有%d位。\n", b);}
     

     
     