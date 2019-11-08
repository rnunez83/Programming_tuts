#include <stdio.h>

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
    if(x <10) printf("the value %f is LESS than 10\n", x);
    else if (x > 10) printf("the value %f is GREATER than 10\n", x);
    else printf("the value is 10\n");
}

