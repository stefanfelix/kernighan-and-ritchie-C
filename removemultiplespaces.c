#include <stdio.h>

/* copy input to output
Version 2
*/

main()
{
	int c;
	int prev=0;
	int removed=0;
	while ((c=getchar())!=EOF){
		if ( c== ' ' && prev==0 ){
		putchar(c);
		prev=1;
		}
		if ( c!= ' '){
		putchar(c);
		prev=0;
		}
		if ( c== ' ' && prev == 1){
		removed++;
		}
	}
	
	printf("\n%d spaces removed\n",removed) ;//does not work correctly
}
