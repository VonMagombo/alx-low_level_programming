/**
 * _memset - fills the memory with a constant byte.
 * @s: input
 * @b: input
 * @n: memory bytes changed
 * Return: String.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
