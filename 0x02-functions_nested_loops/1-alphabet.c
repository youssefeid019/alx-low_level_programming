#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet, followed by a new line
 *
 * Description: Prints each lowercase letter of the English alphabet to the
 * standard output, using the _putchar() function. The letters are printed in
 * order, from 'a' to 'z', and are followed by a newline character to ensure
 * that the output ends on a new line.
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
