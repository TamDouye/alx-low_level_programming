#include "main.h"
<<<<<<< HEAD
<<<<<<< HEAD

/**

 * _strcat - concatenates 2 strings

 * @dest: input value

 * @src: input value

 * Return: dest

 */

char *_strcat(char *dest, char *src)

{

	int q;

	int w;



	q = 0;

	while (dest[q] != '\0')

	{

		q++;

	}

	w = 0;

	while (src[w] != '\0')

	{

		dest[q] = src[w];

		q++;

		w++;

	}



	dest[q] = '\0';

	return (dest);

=======
=======
>>>>>>> bbd31ca064ee12eafc797b7af581e7a57cfed112
/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int v;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	v = 0;
	while (src[v] != '\0')
	{
		dest[a] = src[v];
		a++;
		v++;
	}

	dest[a] = '\0';
	return (dest);
<<<<<<< HEAD
>>>>>>> 82e5efc8451c197d63838afcb529300f0c9171af
=======
>>>>>>> bbd31ca064ee12eafc797b7af581e7a57cfed112
}
