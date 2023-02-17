#include<stdio.h>
/**
 * main - Print the alphabet in lower case followed by uppercase
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	char upper_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 26; i++)
		putchar(lower_alphabet[i]);
	for (i = 0; i < 26; i++)
		putchar(upper_alphabet[i]);
	putchar('\n');
	return (0);
}
