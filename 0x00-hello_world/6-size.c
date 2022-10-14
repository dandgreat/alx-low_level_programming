#include <stdio.h>
/**
 *main -is the entry point for the program.
 *
 *Return:zero if no error, Non-zero value if errors.
 */
int main(void)
{
	printf("Size of a char: 1byte(s)\n", sizeof(char));
	printf("Size of an int: 4byte(s)\n", sizeof(int));
	printf("Size of a long int: 8byte(s)\n", sizeof(long int));
	printf("Size of a long long int: 8bytes(s)\n", sizeof(long long int));
	printf("Size of a float: 4bytes(s)\n", sizeof(float));
	return (0);
}
