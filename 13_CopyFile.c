#include <stdio.h>

/* copy file, replace table with '\t', replace backspace with '\b'
   replace backslash with '\\';
   1st version			
*/
main()
{
	int c;

	while( ( c = getchar() ) != 'Q' )
	{
		if ( c == '	')
		{
			putchar('\\');
			putchar('t');

		} else if ( c == 8 )
		{
			putchar('\\');
			putchar('b');

		} else if ( c == 92)
		{
			putchar('\\');
			putchar('\\');
		} else {
			
			putchar(c);
		}
	}
}
