#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * positive_or_negative - Entry point
 * @i: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is ", i);
	if (i > 0)
	{
		printf("positive\n");
	}
	else if (i < 0)
	{
		printf("negative\n");
	}
	else if (i == 0)
	{
		printf("zero\n");
	}
}
