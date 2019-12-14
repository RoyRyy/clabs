#include <stdio.h>
#include<stdlib.h>
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
int main(int argc,char*argv[])
{
  int a[3];
  int b[3];
  int m,n,q;
  a[0]=atof(argv[1]);
  argv[2]=='/';
  a[1]=atof(argv[3]);
  argv[4]=='/';
  a[2]=atof(argv[5]);
  b[0]=atof(argv[6]);
  argv[7]=='/';
  b[1]=atof(argv[8]);
  argv[9]=='/';
  b[2]=atof(argv[10]);
  m=day_of_year(a[0],a[1],a[2]);
  n=day_of_year(b[0],b[1],b[2]);
  if (a[0]<b[0])
  q=(b[0]-a[0])*365+n-m;
  else if (a[0]=b[0])
  q=n-m;
  printf("这两个日期之间相差%d天\n",q);
}