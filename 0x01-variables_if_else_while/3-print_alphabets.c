#include <stdio.h>
/**
 *main - Enry point
 *Return: Always 0 (Success)
*/
int main(void)
{
	int ch;

	clscr();
	printf("Print uppercase letters then lowercase letters\n");
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar ('\n');
	for (ch = 'a'; ch <= 'z' ch++)
		putchar(ch);
	putchar('\n');
	getch();
}
