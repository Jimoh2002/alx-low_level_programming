#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) /* checking wether it is positive*/
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0) /* check wether it is negative*/
	{
		printf("%d is negative\n", n);
	}
	else /* otherwise it is zero*/
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

