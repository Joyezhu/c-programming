#include <stdio.h>

#define MAXHIST 15	/* max length of histogram */
#define MAXWORD 11	/* max length of a word    */
#define IN 1		/* inside a word 	   */
#define OUT 0		/* outside a word	   */

/* print horizontal histogram */
main()
{
	int c, i,j, nc ,state;
	int len;	/* length of each bar	   */
	int maxvalue;	/* maximun value for wl[]  */
	int ovflow;	/* number of overflow words*/
	int wl[MAXWORD];/* word lenght counters    */

	state = OUT;
	nc = 0;		/* number of chars in a word*/
	ovflow = 0;	/* numver of words>=MAXWORD */
	
	for ( i = 0; i< MAXWORD; ++i)
	{
		wl[i] = 0;
	}

	while ( (c = getchar()) != 'Q' ) {

		if ( c == ' ' || c == '\n' || c == '\t') {

			state = OUT;
			
			if ( nc > 0 ) { 

				if ( nc < MAXWORD ) {
					
					++wl[nc];
				} else {

					++ovflow;	
				}	
			}
			
			nc = 0;

		} else if ( state == OUT ) {

			state = IN;
			nc = 1;		/* beginning of a new word	*/
				
		} else {

			++nc;		/* inside a word		*/
		}
	}

	maxvalue = 0;

	for (i = 1; i < MAXWORD; ++i) {

		//printf("wl[%d]: %4d\n",i, wl[i]);
		if ( wl[i] > maxvalue ) {
			maxvalue = wl[i];
		}
	}

	for (i = MAXHIST; i > 0; --i) {
		
		for (j = 1; j < MAXWORD; ++j) {

			if ( wl[j] >= i ) {
			
				printf("   *");
			} else {
				printf("    ");
			}
		}

		putchar('\n');
	}

	for ( i = 1; i< MAXWORD; ++i) {
		
		printf("%4d", i);
	}		
	
	printf("\n");
	for ( i = 1; i < MAXWORD; ++i) {
		
		printf("----");
	}

	printf("\n");

	for ( i = 1; i< MAXWORD; ++i) {
		
		printf("%4d", wl[i]);
	}

	printf("\n");

			

	if ( ovflow > 0 ) {
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
	}
		
}
