/*
 * File: 9=fizz_buzz.c
 * Auth: Pilar J Thornbrugh
 */

#include <stdio.h>

/**
 * main - prints the nums 1-100, but for mult of 3, fizz is printed instead of 3
 *	  for mult of 5, buzz is printed
 *	  for mult of both 3 and 5, fizzbuzz is printed
 *
 * Return: always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <=100; num++)
	{
		if ((num % 3) == 0 && (num % 5) ==0))
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if ( num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
