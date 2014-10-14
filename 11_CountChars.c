#include <stdio.h>

/* count space, table, and lines; 1st version */
main()
{
	int spaceCount = 0, tableCount = 0, linesCount = 0;
	char c;

	while ( (c = getchar()) != 'q')	
	{
		switch(c)
		{
			case ' ': ++spaceCount; continue;
			case '\t':++tableCount;	continue;
			case '\n':++linesCount;	continue;
		}
	}

	printf("count of space: %d\n",spaceCount);
	printf("count of talbe: %d\n",tableCount);
	printf("count of lines: %d\n",linesCount);
}
