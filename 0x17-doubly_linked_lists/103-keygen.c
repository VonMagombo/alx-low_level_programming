#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int f4(char *usrn, int len)
{
	int key;
	int vch;
	unsigned int rand_num;

	key = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (key < usrn[vch])
			key = usrn[vch];
		vch += 1;
	}

	srand(key ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
	int key;
	int vch;

	key = vch = 0;

	while (vch < len)
	{
		key = key + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)key ^ 239) & 63);
}

/**
 * f6 - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */
int f6(char *usrn)
{
	int key;
	int vch;

	key = vch = 0;

	while (vch < *usrn)
	{
		key = rand();
		vch += 1;
	}

	return (((unsigned int)key ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, key, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	key = vch = 0;
	while (vch < len)
	{
		key = key + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(key ^ 79) & 63];
	/* ----------- f3 ----------- */
	key = 1;
	vch = 0;
	while (vch < len)
	{
		key = argv[1][vch] * key;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(key ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (key = 0; keygen[key]; key++)
		printf("%c", keygen[key]);
	return (0);
}
