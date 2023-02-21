#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point print ALX Student
  *Return: Always 0 (Success)
*/
int main(void)
{
	char sh = "ALX Student";

	while (sh)
	{
		_putchar(sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
