#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*this programs take a randum nuber from a user and tells wehter is postive,zero or negative */
int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 ) 
	{
		printf("%d\tis Positive\n", n);
	} else if( n == 0 )
       	{
		printf( "%d\tis Zero\n", n );
	} else 
		printf( "%d\tis Negative\n", n );
	
	return (0);
}
