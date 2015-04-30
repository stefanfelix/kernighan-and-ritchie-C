#include <stdio.h>
/*Print Celsius-Fahrenheit table
for cels=0,20,....,300
*/

main()
{
	float celsius=0;
	printf(" C\t F\n");
	while(celsius<=300){
	printf("%3.0f\t%6.1f\n",celsius,(9.0/5.0)*celsius+32.0);
	celsius=celsius+20.0;
	}
/*
celsius=5/9*(fahr-32)
fahr-32=9/5*cels
fahr=9/5*cels+32
*/	
}
