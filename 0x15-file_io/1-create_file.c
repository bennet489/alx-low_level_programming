#include "main.h"
#include <stddef.h>

/**
 * _strlen - count str len
 * @str: use str
 * Code by - yusifhuseini
 * Return: str len
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - create file
 * @filename: file name
 * @text_content: create content file
 * Code by - yusifhuseini
 * Return: 1 (success), -1 (fail)
 */
int create_file(const char *filename, char *text_content)
{
	int file, wrote;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrote = write(file, text_content, _strlen(text_content));
		if (wrote == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
