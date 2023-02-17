#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	printf("Print uppercase letters then lowercase letters\n");
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar ('\n');
	for (ch = 'a'; ch <= 'z' ch++)
		putchar(ch);
	putchar('\n');
	getch();
}
