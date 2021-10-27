#include <stdio.h>
#include <ctype.h>

int main()
{
	int acter;

	do
	{
		acter = getchar();
		if(isdigit(acter)) //checks if 'acter' is number
			putchar(acter);
	}
	while( acter != '\n');

	return(0);
}
