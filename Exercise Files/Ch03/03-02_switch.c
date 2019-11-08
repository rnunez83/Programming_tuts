#include <stdio.h>

int main()
{
	char a;

	printf("Your choice (A,B,C): ");
	scanf("%c",&a);

	switch(a) //switch is a keyword
	{
		case 'A': //case is a keyword
			puts("Excellent choice!");
			break;
		case 'B':
			puts("This is the most common choice.");
			break;
		case 'C':
			puts("I question your decision.");
			break;
		default: //this is only executed if nothing else is selected
			puts("That's not a valid choice.");
	}

	return(0);
}

