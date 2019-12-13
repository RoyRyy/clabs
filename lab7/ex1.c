#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    float  a[5];
    int k=0;
    for(k=0;k<5;k++)
    {
        a[k]=atof(argv[k+1]);
        }
    int i,t,j;
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }   
   printf("the minimum number is:");   
   printf(" %1.1f\n",a[0]);}