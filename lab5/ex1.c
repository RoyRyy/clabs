#include<stdio.h>
void reverse(char *m){
	char a =*m;
    
	if(a ){
		reverse(m=m+1);
      
	}
    printf("%c",a);
}
int main(){
    printf("请输入一个字符串我来倒置：");
	char *s;
    scanf("%s",*&s);
    
	reverse(s);
    
	return 0 ;
}