#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD

#include <stdlib.h>

#include <time.h>



/**

 * main - program that generates random valid

 * passwords for the program 101-crackme

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

	int pass[100];

	int i, sum, n;



	sum = 0;



	srand(time(NULL));



	for (i = 0; i < 100; i++)

	{

		pass[i] = rand() % 78;

		sum += (pass[i] + '0');

		putchar(pass[i] + '0');

		if ((2772 - sum) - '0' < 78)

		{

			n = 2772 - sum - '0';

			sum += n;

			putchar(n + '0');

			break;

		}

	}



	return (0);

=======
=======
>>>>>>> bbd31ca064ee12eafc797b7af581e7a57cfed112
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
<<<<<<< HEAD
>>>>>>> 82e5efc8451c197d63838afcb529300f0c9171af
=======
>>>>>>> bbd31ca064ee12eafc797b7af581e7a57cfed112
}
