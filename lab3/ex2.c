#include<stdio.h>

int main()
{
    int nums[10]={0};
    unsigned int num=0,i=0,j=0;
    printf("请输入一个十六进制的非负整数：");
    char temp;
    while((temp=getchar())!='\n')
    {
        nums[i]=temp;
        i++;
    }


if (nums[6]!=0){
    printf("out of the maximun number:%u",-1);
    return 0;
}
if (nums[0]!=48 ||(nums[1]!=88 && nums[1]!=120)){
    printf("illegal input");
}
for (j=2;j<i;j++)
{
    if (nums[j]>=48 && nums[j]<=57) 
    num=num*16+nums[j]-48;
    else if(nums[i]>=65 && nums[j]<=76)
    num=num*16+nums[j]-55;
    else if (nums[j]>=97 && nums[j]<=162)
    num=num*16+nums[j]-87;
    else{
        printf("illegal input");
        return 0;
    }
}
printf("the result is:%d\n",num);
}
