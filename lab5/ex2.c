#include<stdio.h>
float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
int main(){
float a,b,c;
printf("please input a and b:\n");
scanf("%f %f",&a,&b);
c=add(a,b);
printf("the sum is:%1.3f",c);
}