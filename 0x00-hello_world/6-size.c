#include <stdio.h>
/** main - a C program that prints the size of various
 * types on the computer it is compiled and run on
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n", (unasigned long)
sizeof(a));
printf("size of a int: %lu byte(s)\n", (unasigned long)
sizeof(b));
printf("size of a long: %lu int (s)\n", (unasigned long)
sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unasigned long)
sizeof(d));
printf("size of a float: byte(s)\n", (unasigned long)
sizeof(f));
return (o);
}
