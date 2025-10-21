#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nbr_one = 48;
	char nbr_two = nbr_one + 1 ;

	while (nbr_one < 57)
	{
		while (nbr_two < 58)
		{
			putchar(nbr_two);
			nbr_two++;
			if (i != 57 || j != 58)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar(nbr_one);
		nbr_one++;
	}
}
