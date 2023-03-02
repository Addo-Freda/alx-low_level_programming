#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_buffer - A function that prints a buffer
 * @b: pointer
 * @size: bytes of the buffer
 * Return: Always 0.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < size; i += 10)
	{
	printf("%08x ", i);
	for (j = i; j < i + 10 && j < size; j++)
	{
	printf("%02x ", (unsigned char)b[j]);
	}
	for (; j < i + 10; j++)
	{
	printf("   ");
	}
	printf(" ");
	for (j = i; j < i + 10 && j < size; j++)
	{
	if (isprint(b[j]))
	{
	printf("%c", b[j]);
	}
	else
	{
	printf(".");
	}
	}
	printf("\n");
	}
}
