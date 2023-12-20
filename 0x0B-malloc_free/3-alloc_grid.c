#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of array
* @height: height of array
*
* Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
int **array, i, j;
int len = width * height;
if (len <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = (int *)malloc(sizeof(int) * width);
if (array[i] == NULL)
{
for (i--; i >= 0; i--)
free(array[i]);
free(array);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
array[i][j] = 0;
return (array);
}
=============== 4-free_grid.c =============
#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid
* @grid: the grid
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
