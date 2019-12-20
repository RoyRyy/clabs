#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
   double  a[200];
    int k=0,j=0;
    for(k=1;k<argc;k++,j++)
    {
        a[j]=atof(argv[k]);
        }
    int i;
    double min=a[1];
    for(i=0;i<argc-1;i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    
   printf("the minimum number is:");   
   printf(" %1.1f\n",min);}