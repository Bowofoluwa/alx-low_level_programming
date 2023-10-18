#include <stdio.h>
/**
* main - Size is not grandeur, and territory does not make a nation
* Return: 0 if sucessful
*/
int main(void)
{
	printf("Size of a char:%lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of long int: %lu byte(s)", sizeof(long int));
	printf("size of long long int: %lu byte(s)", sizeof(long long int));
	prinff("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
