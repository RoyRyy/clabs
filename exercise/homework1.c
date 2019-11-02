#include <stdio.h>
#include <stdlib.h>
int main()
{
  
  
     unsigned int a = 1;
     while (a>0)
     {
          a++;
      }
     
     printf("unsigned int数据类型最大数是：%u\n", a-1 );  //算出unsigned int 数据类型最大数
     
     unsigned int b=0; 
     
     
     b=a-1;
     {
    int c[64],i=0;
 
    do {
        c[i++]=b%2;
        b=b/2;
    } while(b!=0) ;
    printf("unsigned int最大二进制数是：");
    int n=0;
    for(i--;i>=0;i--){
       if (c[i]!=0)
        n++;
        printf("%d",c[i]);
    }
    printf("\nunsigned int最大二进制数的位数是：%d\n",n);
    
    
}                                                //转换成二进制并算出位数
    
     
  
    return 0;
  
}