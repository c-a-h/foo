#include <stdlib.h>
#include <stdio.h>

/* trick I just learned to return a value from a macro,
 *  allows you to return the last statment in a list of statements */
#define ADD_2(a, b) ({printf("a=%d, b=%d\n", a, b); a+b;})

int main(int argc, char *argv)
{

	int a, b, c;
	a = 1;
	b = 2;
	printf("c = %d\n", c = ADD_2(a, b));

}
