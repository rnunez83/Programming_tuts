#include <stdio.h>

int main()
{
	unsigned int a;
	unsigned int b = 5;

	printf("Input an integer: ");
	scanf("%d",&a);
	printf("%d + %d = %d\n",a,b,a+b);

	return(0);
}

