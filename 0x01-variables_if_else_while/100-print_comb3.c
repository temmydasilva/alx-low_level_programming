#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possble different combinations of two digits
 * Return: always 0 (success)
 */

int main(void)

{
	int (i);
	int (j);

	for (i = '0'; j < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if (j != i)
			putchar(i);
			putchar(j);
			if (i == 8 && j == 9)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
