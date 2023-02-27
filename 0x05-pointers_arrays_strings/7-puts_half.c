#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to check
 *
 * Return: nothing
 */
void puts_half(char *str)
{
        int length = 0;

        char *p;

        p = str;
        while (*p != '\0')
        {
                length++;
                p++;
        }
        if (length % 2 != 0)
                for (p = str + (length - 1) / 2; p < str + length; p++)
                        _putchar(*p);
        else
                for (p = str + length / 2; p < str + length; p++)
                        _putchar(*p);
        _putchar('\n');
}
