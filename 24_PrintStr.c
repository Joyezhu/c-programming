#include <stdio.h>
#define MAXLINE 1000			/* maximum input line size	*/
#define LONGLINE 80

int getlines(char line[], int maxline);

/* print lines longer than LONGLINE	*/
int main()
{
	int len;		/* current line length 	*/
	char line[MAXLINE];	/* current input line	*/
	
	while( ( len = getlines(line, MAXLINE) ) > 0) {

		if ( len > LONGLINE ) {
		
			printf("%s",line);
		}
	}

	return 0;
}

/* getlines: read a line into s, return length		*/
int getlines(char s[], int lim)
{

	int c, i, j;
	j = 0;

	for ( i = 0; ( c = getchar() ) != 'Q' && c != '\n'; ++i) {

		if ( i < lim - 2) {

			s[j] = c;		/* line still in bounderies */
			++j;
		}
	}

	if ( c == '\n' ) {

		s[j] = c;
		++j;
		++i;
	}	

	s[j] = '\0';
	return i;	

}
