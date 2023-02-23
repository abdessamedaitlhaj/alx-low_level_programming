#include<stdio.h>
/**
 * main - FizzBuzz game
 *
 * Description: Program that prints numbers
 * from 1 to 100. But for multiples of three print
 * 'Fizz' instead of the number and for the multiples
 * of five print 'Buzz'. For numbers which are
 * multiples of both three and five print FizzBuzz.
 * Return: 0 Always Sucess
 */
int main(void)
{
	int i;

	printf("%d ",1);
	for (i = 2; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf("%d ", i);
	printf("\n");
	return (0);
}
