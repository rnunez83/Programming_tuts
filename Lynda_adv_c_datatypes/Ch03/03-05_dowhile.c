#include <stdio.h>

int main()
{
	char ch;

	ch = 'A';

	do
	{
		putchar(ch);
		ch++;
	}
	while( ch != 'Z' ); //does not print the 'Z' since it is the exit condition.

	putchar('\n');

	return(0);
}

