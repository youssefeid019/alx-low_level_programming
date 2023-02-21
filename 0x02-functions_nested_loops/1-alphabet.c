#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Description: Prints the English alphabet in lowercase, followed by a new line.
 *              Uses the _putchar function to print each character.
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
