#include "main.h"

/**
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
	ssize_t bytesWritten =  write(STDOUT_FILENO, buffer, bytesRead);


	if (filename == NULL)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		return (0);
	}
	if (file == NULL)
	{
		free(buffer);
		return (0);
	}
	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytesRead);
}
