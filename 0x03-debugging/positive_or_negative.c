#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*positive_or_negative - print a number
*@i : integer
*if the number is greater than 0: is positive, if the numberis 0: is zero
*if the number is less than a 0: is genetive, followed by a new line
*Return: 0
*/

   void positive-or_negative(int i)
{  
	if (i > 0)
                printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}		
