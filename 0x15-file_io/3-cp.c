#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void check_10_stat(int stat, int fd, char *filename, char mode);
/**
 * main - funct copies the content of one file to another
 * @argc: the count of argument
 * @argv: passed arguments
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
int src, dest, a_read = 1024, wrote, close_src, close_dest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
exit(97);
}
src = open(argv[1], O_RDONLY);
check_10_stat(src, -1, argv[1], 'O');
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
check_10_stat(dest, -1, argv[2], 'W');
while (a_read == 1024)
{
a_read = read(src, buffer, sizeof(buffer));
if (a_read == -1)
check_10_stat(-1, -1, argv[1], 'O');
wrote = write(dest, buffer, a_read);
if (wrote == -1)
check_10_stat(-1, -1, argv[2], 'W');
}
close_src = close(src);
check_10_stat(close_src, src, NULL, 'C');
close_dest = close(dest);
check_10_stat(close_dest, dest, NULL, 'C');
return (0);
}
/**
 * check_10_stat - function that checks if a file can be opened
 * and closed
 * @stat: description of file to be opened
 * @filename: filename
 * @mode: opening or closing
 * @fd: file descriptor
 * Return: void
 */
void check_10_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
