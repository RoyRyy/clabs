#include <stdio.h>
main (int argc,char *argv[])
{
    int i;
    i=strrindex(argv[1],argv[2]);
    printf("%d\n",i);
}
int strrindex (char s[],char t[])
{
    int r,u,k;
    int i=0,j=0;
    int m;  
    while(s[i]!='\0'){
    i++;}
    while(t[j]!='\0'){
    j++;}
    if (i>=j)
     m=i-j;
    else 
     m=j-i;
    for (r=m;r>=0;r--){
        for (u=r,k=0;t[k]!='\0' && s[u]==t[k];u++,k++)
          ;
        if (k>0 && t[k]=='\0')
          return r;
    }
     return -1;
}