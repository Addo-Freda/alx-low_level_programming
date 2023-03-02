#include "main.h"
/**
 * infinite_add - A function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
       	int max_len = (len1 > len2) ? len1 : len2;
	
	if (max_len + 1 > size_r)
	{
	return (0);
	}
	int carry = 0;
	int i = lenl - 1;
	int j = len2 - 1;
	int k = max_len;

	while (i >= 0 || j >= 0)
	{
	int d1 = (i >= 0) ? n1[i] - '0' : 0;
	int d2 = (j >= 0) ? n2[j] - '0' : 0;
	int sum = d1 + d2 + carry;

	carry = sum / 10;
	r[k] = sum % 10 + '0';
	i--;
	j--;
	k--;
	}
	if (carry)
	{
	r[k] = carry + '0';
	}
	else
	{
	k++;
	}
	r[max_len + 1] = '\0';
	return (&r[k]);
}	
