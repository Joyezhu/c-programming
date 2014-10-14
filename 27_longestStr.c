#include <stdio.h>
#define MAXLINE 1000

int getlines(void);
void copy(void);

int max;
char longest[];
char line[];

/* print longest input line; specialized version	*/
int main()
{
	int len;
	//extern int max;
	//extern char longest[];

	max = 0;
	while ( ( len = getlines() ) > 0 ) {

		if (len > max ) {

			max = len;
			copy();
		}
	}

	if ( max > 0 ) {			/* there was a line		*/
	
		printf("%s", longest);

	}
	
	return 0;
}

/* getlines: specialized version */
int getlines(void)
{
	int c, i;
	//extern char line[];

	for ( i = 0; i < MAXLINE - 1 && ( c = getchar() ) != 'Q' && c != '\n'; ++i) {

		line[i] = c;
	}

	if ( c == '\n' ) {

		line[i] = c;
		++i;
	}

	line[i] = '\0';

	return i;
}

/* copy: specialized version */
void copy(void) {

	int i = 0;
	//extern char line[], longest[];

	while ( (longest[i] = line[i]) != '\0' ) {
		++i;
	}
}

/*   test   */
