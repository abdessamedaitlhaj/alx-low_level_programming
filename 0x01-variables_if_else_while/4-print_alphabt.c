#include<stdio.h>
/**
 * main - Print the alphabet in lower case except e and q
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
			putchar(alphabet[i]);
		putchar('\n');
	return (0);
}
