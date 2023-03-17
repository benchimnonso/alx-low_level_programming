#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - program entry point
 * Return: always return 1
 */
int main(void)
{
const char *data = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n\0";
unsigned long len = strlen(data);
write(2, data, len);
return (1);
}
