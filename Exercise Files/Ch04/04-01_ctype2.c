#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch = 'a';

	printf("Original %d\n",ch); //changed to ascii integer is returned.
	printf("Lowercase %d\n",tolower(ch));
	printf("Uppercase %d\n",toupper(ch));
	printf("Original %d\n",ch);

	return(0);
}

