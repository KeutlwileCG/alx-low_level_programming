0x0C. C - More malloc, free
README.md


Project

0x0C. C - More malloc, free





































main.h


#ifndef MAIN_H

#define MAIN_H


#include <stdio.h>

#include <stdlib.h>

#include <limits.h>


int _putchar(char c);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

void errors(void);

int _strlen(char *s);

int is_digit(char *s);


#endif





















0-malloc_checked.c


#include <stdlib.h>

#include main.h


/**

 * *malloc_checked - allocates memory using malloc

 * @b: number of bytes to allocate

 *

 * Return: a pointer to the allocated memory

 */

void *malloc_checked(unsigned int b)

{

        void *ptr;


        ptr = malloc(b);


        if (ptr == NULL)

                exit(98);


        return (ptr);

}


