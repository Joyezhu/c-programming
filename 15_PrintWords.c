#include <stdio.h>

/* print word from input, each line one word. */
main()
{
	int c;

	while( ( c = getchar() ) != 'Q' )
	{
		if ( c == '\t' || c == '\n' || c == ' ')
		{
			putchar('\n');
	
		} else {
			
			putchar(c);
		}
	}
}
