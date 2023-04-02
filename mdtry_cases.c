#include "main"


/**
 * case_ch - function for a singlen character (C case)
 * @list: Characters
 * @buff: Buffer
 * @print_len: Actual position of buffer
 * Return: last position on buffer
 */
int case_ch(va_list list, char *buff, int print_len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	if (c == NULL)
		return (print_len);
	c[0] = va_arg(list, int);
	if (c[0] == 0)
		print_len += 1;
	c[1] = '\0';
	print_len = replace(buff, c, print_len);
	free(c);
	return (print_len);
}


/**
 * case_str - function for a string (s case)
 * @list: String
 * @buff: Buffer
 * @print_len: Actual position of buff
 * Return: Last position on buff
 */
int case_str(va_list list, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len;

	aux = va_arg(list, char*);
	if (aux == NULL)
		aux = "(null)";
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	free(s);
	return (print_len);
}


/**
 * case_dec - Function for a decimal number (d case)
 * @list: Decimal
 * @buff: Buffer
 * @print_len : Actual position of buff
 * Return: Last position on buff
 */
int case_dec(va_list list, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(list, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _itoa(num, aux, 10);
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	free(s);
	free(aux);
	return (print_len);
}


/**
 * perc_case - Function for % case
 * @list: Unused
 * @buff: buffer
 * @print_len: Actual position of buff
 * Return: Last position on buff
 */
int perc_case(va_list __attribute__((unused)) list, char *buff, int print_len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	if (c == NULL)
		return (1);
	c[0] = '%';
	c[1] = '\0';
	print_len = replace(buff, c, print_len);
	free(c);
	return (print_len);
}


/**
 * bin_case - Function for a binary number (case b)
 * @list: Intiger to convert into binary
 * @buff: Buffer
 * @print_len : Actual position of buff
 * Return: Last position on buff
 */
int bin_case(va_list list, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(list, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _itoa(num, aux, 2);
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	free(s);
	free(aux);
	return (print_len);
}
