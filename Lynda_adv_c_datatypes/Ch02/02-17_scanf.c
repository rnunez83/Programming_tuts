#include <stdio.h>

int main()
{
	char name[15];		/* room for 14 characters */

	printf("Your name? ");
	//scanf only picks up to the whitespace character is reached or size of buffer
    scanf("%s",name); //no & required on array
    printf("You are %s.\n",name);

	return(0);
}

