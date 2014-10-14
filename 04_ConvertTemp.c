#include <stdio.h>

/* when fahr = 0,20, ... , 300, print the parallel talbe of fahrenheit and celsius */

main()
{

	float fahr, celsius;
	
	float lower, upper, step;

	lower = 0;	/* min temper */
	upper = 300; 	/* max temper */
	step = 20;	/* steps */

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr -32);
		printf("%3.0f\t%6.1f\n",fahr, celsius);
		fahr = fahr + step;
	
	}
	
}
