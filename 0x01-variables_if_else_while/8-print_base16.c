#include <stdio.h>
/**
*main - Entry point
*Return: [0] in case success
*/
int main(void)
{
int i;
char l;
for (i = 0 ; i < 10 ; i++)
{
putchar((i % 10) + '0');
}
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}
