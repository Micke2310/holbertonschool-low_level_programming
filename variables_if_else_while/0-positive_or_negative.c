# include <stdio.h>

# include <time.h>
/**
 *main - Enter point
 *
 *name the file
 *0-positive_or_negative.c
 *
 *Return: Always 0 (Success)
 */

int main(void)
   {
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n < 0)

	  {	printf("%d is negative\n",n);
	
	  } else if (n > 0)
	           {
			   printf("%d is positive\n",n);
	           } else (n = 0)
		         {
				printf("%d is zero\n",n); 
			 } 


	return (0);

    }
