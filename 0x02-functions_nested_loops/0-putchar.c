#include"main.h"
/**
 * main - entry block
 * Description - a function that prints "_putchar"
 * * Return: 0;
 */
int main(void)
{
	char p[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
