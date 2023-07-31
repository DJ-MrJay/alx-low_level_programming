/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination array where content is to be copied
 * @src: pointer to source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
