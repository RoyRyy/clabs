#include <stdio.h>

int main ()
{
    int n;
    int i=0;
    int a[100];
    int count=0;
    printf("Enter a decimal positive integer:\n");
    scanf("%d",&n);
    printf("the corresponding binary integer is:");
    while (n)
    {
        a[i]=n%2;
        i=i+1;
        n/=2;

    }
   for(int k=i-1;k>=0;k--){
       printf("%d",a[k]);
       if(a[k]==1)
       {
           count=count+1;
       }
   }
printf("\n\"1\"the number of occurences is%d\n",count);
}