#include <stdio.h>

/**
 * main - Entry
 * Description: Printing alphabets in lowercase and uppercase and then new line
 * Return: 0(Success)
*/
int main(void)
{
	char l_s = 'a';
	char u_s = 'A';

	while (l_s <= 'z')
	{
		putchar(l_s);
		l_s++;
	}
	while (u_s <= 'Z')
	{
		putchar(u_s);
		u_s++;
	}
	putchar('\n');
	return (0);
}
