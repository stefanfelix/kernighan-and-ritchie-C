#include <stdio.h>

/* copy input to output
Version 2
*/

main()
{
	int c;
	while ((c=getchar())!=EOF){
		if ( c == '\n'){
		putchar('\\');
		putchar('n');
		putchar('\n');
		}
		else if ( c == '\t'){
		putchar('\\');
		putchar('t');
		}
		else if ( c == '\\'){
		putchar('\\');
		putchar('\\');
		}
		else 
		putchar(c);
	}
}
