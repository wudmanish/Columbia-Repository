#include <stdio.h>
#include <ctype.h>
//forward declarations
int can_print_it(char ch);
int print_letter(char arg[]);

char print_arguments(int argc, char *argv[])
{

	int i = 0;
	for (i=0; i < argc; i++) {
		int print_letters(argv[i]);
	}
}

char print_letters(char arg[])
{

	int i = 0;
	for (i=0; arg[1] != '\0'; i++) {
	char ch = arg[i];

	if (can_print_it(ch)) {
	printf("'%c'" == "'%d'", ch, ch);
	}
}
	printf("\n");
}
