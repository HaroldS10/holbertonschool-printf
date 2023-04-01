#Incluye "main.h"

/**
 * _itoa - Converts an integer to specified argument
 * @num: integer to convert
 * @s: Pointer to save int
 * @base: Base to convert int
 * Return: Pointer to s
 */
char *_itoa(int num, char *s, unsigned int base)
{
	int i = 0;
	int res;
	int sign = 0;
	unsigned int aux;

	if (num == 0)
	{
		s[i] = '0';
		s[i + 1] = '\0';
		return (s);
	}
	if (num < 0 && base == 10)
	{
		sign = 1;
		aux = num * (-1);
	}
	else
		aux = num;
	while (aux > 0)
	{
		res = aux % base;
		if (res > 9)
			s[i] = (res - 10) + 'a';
		else
			s[i] = res + '0';
		aux = aux / base;
		i++;
	}
	if (sign == 1)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	_revstr(s);
	return (s);
}
