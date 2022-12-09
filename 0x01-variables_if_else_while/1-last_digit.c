#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lst_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_digit = n % 10;
	if (lst_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_digit);
	else if (lst_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_digit);
	else if (lst_digit < 6 && lst_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,lst_digit);
	return (0);
}
