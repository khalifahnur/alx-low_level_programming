#include<stdio.h>
/**
 * main - outputs size
 *return: 0(success)
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n",sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %llu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
