#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);

main()
{
    float a[100],*p,j,m=0;
    int i,o;
    p=a;
    printf("请输入你要求和的浮点数个数：");
    scanf("%d",&o);
    printf("请输入这%d个浮点数，以回车键结束：\n",o);
    for (i=0;i<o;i++){
     getfloat(&p[i]);}
    for (i=0;i<o;i++)
    {
      
       j=p[i];
       m=m+j;
    }
    printf("the sum is:");
    printf("%1.2f",m);
}
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;
int getch(void)
{
    return (bufp>0)? buf[--bufp]:getchar();
}
void ungetch(int c)
{
    if (bufp>=BUFSIZE)
       printf("ungetch:too many characters\n");
    else
    {
         buf[bufp++]=c ;
    }
    
}
int getfloat (float *pn)
{
    int c,sign;
    float power;
    while (isspace(c=getch()))
    ;
    if (!isdigit(c) && c!=EOF && c!= '+' && c !='-'&& c!='.'){
        ungetch(c);
        return 0;
    }
    sign = (c =='-')? -1:1;
    if (c=='+'||c=='-')
        c=getch();
    for (*pn=0.0;isdigit(c);c=getch())
       *pn=10.0 * *pn+(c-'0');
    if (c=='.')
        c=getch();
    for (power=1.0;isdigit(c);c=getch()){
        *pn=10.0 * *pn+(c-'0');
        power *=10.0;
    }
    *pn *=sign/power;
    if (c!=EOF)
      ungetch(c);
    return c;

}
