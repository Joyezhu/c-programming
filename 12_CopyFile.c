#include <stdio.h>

/* copy input to output, skip multiple spcace with one space; 1st version */
main()
{
	int c, flag = 0;

	while ( (c = getchar()) != 'Q')
	{
		if ( c != ' ')
		{
			putchar(c);
			flag = 0;

		} else if ( !flag )
		{
			putchar(c);
			flag = 1;			
		}
	}

}
