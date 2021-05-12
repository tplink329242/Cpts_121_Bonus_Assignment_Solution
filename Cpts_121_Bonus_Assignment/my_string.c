#include "my_string.h"

char* my_strcpy(char* destination, const char* source)
{
	const int length_source = my_strlen(source);

	for (int i = 0; i < length_source; ++i)
	{
		destination[i] = source[i];
	}
	return destination;
}

char* my_strncpy(char* destination, const char* source, int n)
{
	const int length_source = my_strlen(source);
	char* temp = destination;

	if (length_source >= n)
	{
		for (int i = 0; i < n; ++i)
		{
			destination[i] = source[i];
		}
		*(temp + n) = '\0';
	}
	else
	{
		for (int i = 0; i < length_source; ++i)
		{
			destination[i] = source[i];
		}
		for (int i = length_source; i < n; ++i)
		{
			destination[i] = '\0';
		}
	}
	return destination;
}

char* my_strcat(char* destination, const char* source)
{
	const int length_source = my_strlen(source);
	const int length_destination = my_strlen(destination);

	//start writing
	for (int i = 0; i <= length_source; ++i)
	{
		destination[length_destination + i] = source[i];
	}
	destination[length_destination + length_source] = '\0';
	return destination;
}

char* my_strncat(char* destination, const char* source, int n)
{
	const int length_source = my_strlen(source);
	const int length_destination = my_strlen(destination);

	//start writing
	if (n <= length_source)
	{
		for (int i = 0; i <= n; ++i)
		{
			destination[length_destination + i] = source[i];
		}
		destination[length_destination + n] = '\0';
	}
	else
	{
		for (int i = 0; i <= length_source; ++i)
		{
			destination[length_destination + i] = source[i];
		}
		for (int i = length_source; i < n; ++i)
		{
			destination[length_destination + length_source + i] = '\0';
		}
		destination[length_destination + length_source] = '\0';
	}
	return destination;
}

int my_strcmp(const char* s1, const char* s2)
{
	const int length_s1 = my_strlen(s1);
	const int length_s2 = my_strlen(s2);
	int rtn_value = 0;

	for (int i = 0; i < (length_s1 < length_s2 ? length_s1 : length_s2); ++i)
	{
		if ((int)s1[i] - (int)s2[i] > 0)
		{
			rtn_value = 1;
			break;
		}
		if ((int)s1[i] - (int)s2[i] < 0)
		{
			{
				rtn_value = -1;
				break;
			}
		}
	}
	return rtn_value;
}

int my_strncmp(const char* s1, const char* s2, int n)
{
	const int length_s1 = my_strlen(s1);
	const int length_s2 = my_strlen(s2);
	int rtn_value = 0;

	for (int i = 0; i < n; ++i)
	{
		if ((int)s1[i] - (int)s2[i] > 0)
		{
			rtn_value = 1;
			break;
		}
		if ((int)s1[i] - (int)s2[i] < 0)
		{
			{
				rtn_value = -1;
				break;
			}
		}
	}
	return rtn_value;
}

int my_strlen(const char* s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}

char* my_gets(char* s)
{
	char* temp = s;
	scanf(" %[^\n]", s);
	*(temp + my_strlen(s))= '\0';
	return s;
}

int my_puts(const char* s)
{
	printf("%s", s);
	return my_strlen(s);
}

int my_getchar(void)
{
	char num = 0;
	scanf(" %c", &num);
	return (int)num;
}

int my_putchar(int c)
{
	printf_s("%c", c);
	return c;
}

char* my_fgets(char* s, int n, FILE* stream)
{
	//init string
	char* temp = s;
	s = (char*)malloc(n * sizeof(char));
	for (int i = 0; i < n; ++i)
	{
		*temp = my_fgetc(stream);
		if (*temp == MY_EOF)
		{
			break;
		}
		if (*temp == '\n')
		{
			temp++;
			break;
		}
		temp++;
	}
	*temp = '\0';

	return s;
}

int my_fputs(const char* s, FILE* stream)
{
	int flags = 0;
	flags = fprintf(stream, "%s", s);
	if (flags < 0)
	{
		return MY_EOF;
	}
	return my_strlen(s);
}

int my_fgetc(FILE* stream)
{
	char c = MY_EOF;
	int flag = 0;
	flag = fscanf(stream, "%c", &c);
	if (flag != MY_EOF)
	{
		return (int)c;
	}
	return MY_EOF;
	
}

int my_fputc(int c, FILE* stream)
{
	int flags = 0;
	flags = fprintf(stream, "%c", c);
	if (flags < 0)
	{
		return MY_EOF;
	}
	return c;
}
