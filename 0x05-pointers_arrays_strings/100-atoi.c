#include "main.h"

<<<<<<< HEAD
<<<<<<< HEAD


/**

 * _atoi - converts a string to an integer

 * @s: string to be converted

 *

 * Return: the int converted from the string

 */

int _atoi(char *s)

{

	int i, d, n, len, f, digit;



	i = 0;

	d = 0;

	n = 0;

	len = 0;

	f = 0;

	digit = 0;



	while (s[len] != '\0')

		len++;



	while (i < len && f == 0)

	{

		if (s[i] == '-')

			++d;



		if (s[i] >= '0' && s[i] <= '9')

		{

			digit = s[i] - '0';

			if (d % 2)

				digit = -digit;

			n = n * 10 + digit;

			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;

			f = 0;

		}

		i++;

	}



	if (f == 0)

		return (0);



	return (n);

=======
=======
>>>>>>> bbd31ca064ee12eafc797b7af581e7a57cfed112
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
<<<<<<< HEAD
>>>>>>> 82e5efc8451c197d63838afcb529300f0c9171af
=======
>>>>>>> bbd31ca064ee12eafc797b7af581e7a57cfed112
}
