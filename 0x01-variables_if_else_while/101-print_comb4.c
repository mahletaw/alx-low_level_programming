#include <stdio.h>
/**
 * main - Print the combination of three different single digit numbers
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int num, i, j;
for (num = 0; num < 10; num++)
{
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (num == i || num == j || i == j || num > i || i > j)
{
continue;
}
else
{
putchar(num + '0');
putchar(i + '0');
putchar(j + '0');
if (num == 7 && i == 8 && j == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
