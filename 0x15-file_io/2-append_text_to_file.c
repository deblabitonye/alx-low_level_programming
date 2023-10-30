#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: filename
 * @text_content: content added
 * Return: 1if file exists. -1 if file does not exist
 * or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_a;
int bletters;
int rwr;

if (!filename)
return (-1);

file_a = open(filename, O_WRONLY | O_APPEND);
if (file_a == -1)
return (-1);
if (text_content)
{
for (bletters = 0; text_content(bletters); bletters++)
;
rwr = write(file_a, text_content, bletters);
if (rwr == -1)
return (-1);
}
close(file_a);
return (1);
}
