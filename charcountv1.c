#include <stdio.h>

/* count characters in input;
Version1
*/

main ()
{
	long nc;

	nc=0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n",nc);
}
