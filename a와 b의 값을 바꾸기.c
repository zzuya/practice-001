/*#include<stdio.h>
int main(void)
{
	int a,b, temp;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &temp);
	
	a=5;
	b=3;
	temp=5; 
	a=b;
	b=temp;
	
	
	
	printf("a= %d\n",a);
	printf("b= %d",b); 
	
	
}*/

#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int temp;
	
	
	printf("a에 넣을 수를 입력하시오 : ");
	scanf("%d", &a);
	
	printf("b에 넣을 수를 입력하시오 : ");
	scanf("%d", &b);
	
	temp=a; 
	a=b;
	b=temp;
	
	
	printf("a= %d\n",a);
	printf("b= %d",b); 
	 
}
	
