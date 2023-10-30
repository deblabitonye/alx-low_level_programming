#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file to read
 * @letters: number of letters the file should read and
 * print
 * Return: actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file a;
ssize_t lenb, lenc;
char *buffer;

if (filename == NULL)
return (0);
file_a = open(filename, o_RDONLY);
if (file_a == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file_a);
return (0);
}
lenb = read(file_a, buffer, letters);
close(file_a);
if (lenb == -1)
{
free(buffer);
return (0);
}
lenc = write(STDOUT_FILENO, buffer, lenb);
free(buffer);
if (lenb != lenc)
return (0);
return (lenc);
}
