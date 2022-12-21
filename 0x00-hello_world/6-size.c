#include <stdio.h>
/*
 * main - pprint out data types in c
 * Return: (0)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of an long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of an long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of an float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}

