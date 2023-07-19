#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 102 ; i++)
	{
		putchar (i);
		if (i == 57)
			i = i + 39;
	}
	putchar ('\n');
	return (0);
}
