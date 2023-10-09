#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 *
 * Return: 0 (success)
 */
int main(void)
{
	pnintf("Size of a char: %d byte(s)\n", sizeof(char));
	pninti("Size of an int: %d byte(s)\n", sizeof(int));
	pnint("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	pnintf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
