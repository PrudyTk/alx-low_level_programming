#include <studio.h>
/**
 * main - prints the alphabets exclude q and e
 * Return: Always 0 (Success)
*/
int main(void)
{

	char ch = 'a';


	while (ch <= 'z')

	{

		if (ch != 'e' && ch != 'q')

		{

			putchar(ch);

		}

		ch++;

	}

	putchar('\n');

	return (0);

}
