#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: content written in the file
 * Return: 1 if it is success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int file_a;
int rwr;
int bletters;

if (!filename)
return (-1);

file_a = open(filename, O_CREATE | O_WRONLY | O_TRUNC, 0600);
if (file_a == -1)
return (-1);
if (!text_content)
text_content = "";
for (bletters = 0; text_content[bletters]; bletters++)
;
rwr = write(file_a, text_content, bletters);
if (rwr == -1)
return (-1);
close(file_a);
return (1);

