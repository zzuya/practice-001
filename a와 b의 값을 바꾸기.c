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
	
	
	printf("a�� ���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	printf("b�� ���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &b);
	
	temp=a; 
	a=b;
	b=temp;
	
	
	printf("a= %d\n",a);
	printf("b= %d",b); 
	 
}
	
