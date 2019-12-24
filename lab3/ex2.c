#include<stdio.h>
int main()
{
    int a[15],t,i=0,m,u=0;
    for(t=0;t<10;t++){
     a[t]=0;}
    unsigned int ryy=0,j=0,k=1,e=0;
    printf("请输入一个十六进制的整数：");
    char b;
    while(k!=0){
    k=k<<1;}
    while((b=getchar())!='\n')
    {
        a[i]=b;
        i++;
        if(i>=10){
         printf("out of the maximun number");
        return 0;}
    }
    e=k-1;
    while(e>0){
   e=e /16;
   m=e%16;
   if(m!=0){
    u++;}
    }
if (a[0]!='0' ||(a[1]!='x' && a[1]!='X')){
    printf("illegal input");
    return 0;
                                         }
 if (a[u+3]!=0){
   printf("out of the maximun number:%u",k-1);
    return 0;
           }
for (j=2;j<i;j++)
{
    if (a[j]>='0' && a[j]<='9') 
    ryy=ryy*16+a[j]-'0';
    else if(a[j]>='A' && a[j]<='F')
    ryy=ryy*16+a[j]-'7';
    else if (a[j]>='a' && a[j]<='f')
    ryy=ryy*16+a[j]-'W';
    else{
        printf("illegal input");
        return 0;
    }
}
printf("the result is:%d\n",ryy);

}
