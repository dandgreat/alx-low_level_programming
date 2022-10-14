#include <stdio.h>
/**
 *main -is the entry point for the program.
 *
 *Return:zero if no error, Non-zero value if errors.
 */
int main(void)
{
	printf("Size of a char: %Iubyte(s)\n", sizeof(char));
	printf("Size of an int: %Iubyte(s)\n", sizeof(int));
	printf("Size of a long int :%Iubyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %Iubytes(s)\n", sizeof(long long int));
	printf("Size of a float: %Iubytes(s)\n", sizeof(float));
	return (0);
}
