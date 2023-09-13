#include <stdio.h>

/**
 * main - program that computes sum of multiples of 3 and 5 in num below 1024
 *
 * Return: 0
 */

int main(void)

{
	int sum = 0;
		int i;

		for (i = 0; i < 1024; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
				sum = sum + i;
		}
		printf("%d\n", sum);
		return (0);
}
