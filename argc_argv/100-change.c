#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents, i;
	int coins = 0;
	int pieces[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)

	{
	coins += cents / pieces[i];
	cents = cents % pieces[i];
	}
	printf("%d\n", coins);

	return (0);
}
