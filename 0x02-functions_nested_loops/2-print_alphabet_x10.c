#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed
 *                      by a new line.
 *
 * Description: Prints the English alphabet in lowercase, ten times in total,
 *              followed by a new line after each sequence of letters. Uses
 *              the _putchar function to print each character.
 */
void print_alphabet_x10(void)
{
char letter;
int count = 0;

while (count < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
count++;
}
}
