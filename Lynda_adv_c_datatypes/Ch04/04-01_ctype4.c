#include <stdio.h>
#include <ctype.h>

int main()
{
	int acter;

	do
	{
		acter = getchar();
		if(isalpha(acter)) //checks if 'acter' is alphabetical
			putchar(acter);
	}
	while( acter != '\n');

	return(0);
}

