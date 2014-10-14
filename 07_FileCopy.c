#include <stdio.h>

/* copy input to output; 1st version */

main()
{
	
	int c;

	while((c = getchar()) != EOF)
	{
		printf("result: %d\n",getchar() != EOF);
		putchar(c);
	}
}
