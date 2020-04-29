#include <stdio.h>

int main()
{
	char input[64];		/* 63 characters plus null */

	printf("Instructions: ");
    fgets(input,64,stdin); //args -> {input, max num of chars to read including the null, read from where}
	puts("Thank you! Here are your instructions:");
	puts(input);

	return(0);
}

