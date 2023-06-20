#include <stdio.h>
/**
*main - A function that prints the alphabet, in lowercase.
*Return : 0(success)
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
