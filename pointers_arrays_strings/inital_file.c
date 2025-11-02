#include <stdio.h>

/**
* main - Entry point
*
* Description: Modify a[2] to 98 using the pointer p
*
* Return: Always 0
*/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[2];

	/*
	* write your line of code here...
	* Remember:
	* - you are not allowed to use a
	* - you are not allowed to modify p
	* - only one statement
	* - you are not allowed to code anything else than this line of code
	*/
	*p = 98;

	if (a[2] == 98)
	{
		printf("a[2] = %d\n", a[2]);
	}

	return (0);
}
