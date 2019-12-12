#include <stdio.h>
static char daytab[2][13]={
    {0,31,28,31,30,31,30,31,31,30,31,30,31}
   ,{0,31,29,31,30,31,30,31,31,30,31,30,31}
 
};
int day_of_year (int year,int month,int day)
{
    int i,leap;
    leap=((year%4 == 0) && (year%100 != 0)) || (year%400 ==0);
    if(month<1 || month>12)
    return -1;
    if (day <1 || day> daytab[leap][month])
    return -1;
    for(i=1;i<month;i++)
    day += daytab[leap][i];
    return day;
}
int main()
{
    int a=0,b=0,c=0,m=0;
    int d=0,e=0,f=0,n=0;
    int k=0;
   printf("请输入两个年份/月份/日期，中间以空格间隔：");
   scanf("%d/%d/%d %d/%d/%d",&a,&b,&c,&d,&e,&f);  
   m= day_of_year(a,b,c);
   n=day_of_year(d,e,f);
    if(a<d)
      k=(d-a)*365+(n-m);
    else if(a==d)
      k=n-m;
    if(a>d)
     printf("ERROR");
     printf("这两个日期之间间隔%d天\n",k);
    if ((n<m)||(m<=0)||(n<=0)||b<1||b>12||c<1||c>31||e<1||e>12||f<1||f>31)
      printf("Error!Wrong number.");
   
}