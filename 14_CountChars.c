#include <stdio.h>

#define IN 1 	/* inside a word */
#define OUT 0 	/* outside a word */

/* count lines, words, and characters in input */
main()
{
	int c, nl, nw, nc, state;

	state = OUT;

	nl = nw = nc =0;
	while( (c = getchar()) != 'Q' )
	{
		++nc;
	
		if( c == '\n')
		{
			++nl;
		}
		if( c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;

		} else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	
	printf("lines: %d\nwords: %d\nchars: %d\n", nl,nw,nc);
}
