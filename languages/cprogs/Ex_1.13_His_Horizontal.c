/*print a horizontal histogram of words in the input */

#include<stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, state;
	
	state = OUT;

	while((c=getchar())!=EOF)
	{

		if( c == ' ' || c == '\n' || c == '\t')
		{
		    if (state == OUT)
		    {
		        putchar('\n');
		        state = IN;
		    }
		}
		else
		{
		    putchar('*');
		    if (state == IN)
		    {
		        state = OUT;
		    }
		}
	}
return 0;
}
