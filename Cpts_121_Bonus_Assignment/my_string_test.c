#include "my_string.h"
#include "my_string_test.h"

void my_StringTest()
{
	char array[20] = { '\0' };
	char array_input[20];
	char array_2[20] = { "Cpts_121" };
	char array_3[20] = { "Cpts_121" };

	char c = '\0';

	my_gets(array_input);
	printf_s("%s", array_input);
	my_strncpy(array, array_2, 20);
	my_strncat(array, array_3, 8);
	c = (char)my_getchar();
	printf("%c", c);

	my_putchar(65);
	getchar();

	FILE* infile = open_file("input.txt", "r");
	FILE* outfile = open_file("output.txt", "w");

	printf_s("%c", my_fgetc(infile));
	my_fputc('A', outfile);

	//string

	printf_s("\n");
	my_fgets(array, 19, infile);
	printf_s("%s", array);
	my_fputs(array_2, outfile);
}

FILE* open_file(char* filename, char* fileaccess)
{
	FILE* infile = NULL;
	infile = fopen(filename, fileaccess);
	if (infile == NULL)
	{
		perror("Error: ");
		return NULL;
	}

	printf("\nOpening success");
	return infile;
}
