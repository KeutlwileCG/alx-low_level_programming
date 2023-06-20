#include <stdio.h>
/**
* main - a function that prints the alphabet, in lowercase, followed by a new line.
* Return : 0 (success)
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
return (0);
}
