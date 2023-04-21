#include <stdio.h>
#include <stdio.h>
/**
*main - Entry point
*Return: [0] in case success
*/
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; ++c)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
