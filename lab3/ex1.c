#include<stdio.h>
__INT16_TYPE__ stringminus(char a[],char b[])
{
    int i=0,j=0;
    int m; 
    while(a[i]!='\0'){
    i++;}
    while(b[j]!='\0'){
    j++;}
    if (i>=j)
     m=i-j;
    else 
     m=j-i;
    return m;
}
int strrindex (char s[],char t[])
{
    int r,u,k;
    
    for (r=stringminus(s,t);r>=0;r--){
        for (u=r,k=0;t[k]!='\0' && s[u]==t[k];u++,k++)
          ;
        if (k>0 && t[k]=='\0')
          return r;
    }
     return -1;
}
int main()
{
    char f[100],j[100];
    int i;
    printf("输入两个字符串，中间以空格间隔：");
    scanf("%s %s",f,j);
    i=strrindex(f,j);
    printf("%d\n",i);
}
