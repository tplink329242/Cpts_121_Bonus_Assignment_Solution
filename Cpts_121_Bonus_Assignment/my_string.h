/*******************************************************************************************

* Programmer: Guangbei Yi                                                                        *

* Class: CptS 121, Spring 2021; Bonus Assignment                                   *

* Programming Assignment: String Processor                 *

* Date: April 25, 2021                                                                           *

* Description: This program solved Write a C program that evaluates the equations provided.

* https://eecs.wsu.edu/~aofallon/cpts121/progassignments/StringProcessor.htm

*******************************************************************************************/

#ifndef MY_STRING_H
#define MY_STRING_H

#ifdef __cplusplus
extern "C" {
#endif


#define MY_EOF -1	

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char* my_strcpy(char* destination, const char* source);

char* my_strncpy(char* destination, const char* source, int n);

char* my_strcat(char* destination, const char* source);

char* my_strncat(char* destination, const char* source, int n);

int my_strcmp(const char* s1, const char* s2);

int my_strncmp(const char* s1, const char* s2, int n);

int my_strlen(const char* s);

char* my_gets(char* s);

int my_puts(const char* s);
	
int my_getchar(void);

int my_putchar(int c);

char* my_fgets(char* s, int n, FILE* stream);

int my_fputs(const char* s, FILE* stream);

int my_fgetc(FILE* stream);

int my_fputc(int c, FILE* stream);
	
#ifdef __cplusplus
}
#endif
#endif
	