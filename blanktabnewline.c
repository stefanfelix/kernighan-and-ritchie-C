#include <stdio.h>

/* count characters in input;
Version1
*/

main ()
{
	int c;
	int spaces=0;
	int tabs=0;
	int newlines=0;
	while ((c=getchar()) != EOF)
	{	if(c=='\n')
			++newlines;
		if(c=='\t')
			++tabs;
		if(c==' ')
			++spaces;
	}
	printf("\n%d spaces ,%d tabs and %d new lines\n",spaces,tabs,newlines);
}
