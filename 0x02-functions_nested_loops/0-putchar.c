#include <stdio.h>


/**
* main - - prints the world_putchar
*
* Return: 0 Always (success)
*/
int main(void)
{
char s[] = "_putchar";
int i = 0;

while (s[i] != '\0')
{
putchar(s[i]);
i++;
}
putchar(10);
return (0);
}
