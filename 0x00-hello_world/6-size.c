#include <stdio.h>
/**
 *main -is the entry point for the program.
 *
 * Return:zero if no error, Non-zero value if errors.
 */
int main(void)
	printf("Size of a char:%ldbyte(s)\n", sizeof(char));
	printf("Size of an int: %ldbyte(s)\n", sizeof(int));
	printf("Size of a long int: %ldbyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ldbytes(s)\n", sizeof(long long int))
	printf("Size of a float: %ldbytes(s)\n", sizeof(float));
	return (0);
}
