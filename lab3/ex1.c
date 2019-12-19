#include<stdio.h>
#include<string.h>  //运用函数库函数strlen,用来计算字符串长度。
main()
{
    char a[10],b[10];
    int i;
    printf("输入两个字符串，中间以空格间隔：");
    scanf("%s %s",&a,&b);
    i=strrindex(a,b);
    printf("%d\n",i);

}


int strrindex (char s[],char t[])
{
    int m,u,k;
    for (m=strlen(s)-strlen(t);m>=0;m--){
        for (u=m,k=0;t[k]!='\0' && s[u]==t[k];u++,k++)
          ;
        if (k>0 && t[k]=='\0')
          return m;
    }
     return -1;
}