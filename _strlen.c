#include "main.h"
#include <stdio.h>

/**
 * _strlen - string length
 * @str: pointer to the string
 *
 * Return: length
 */
int _strlen(char *str)
{
  int len, i;

  if (str == NULL)
    return (0);

  for (i = 0, len = 0; str[i] != '\0'; i++)
    len++;

  return (len);
}
