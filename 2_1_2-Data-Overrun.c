#include <stdio.h>

void MayOverrun(char a,  char b)
{
	if(a + b > b)
		printf("value %d.\n", a+b);
	return;
}

int main()
{
	char a = 2, b = 127;
	MayOverrun(a, b);
	return 0;
}


/***************************** Lint Output ***********************************
	No Result
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Could not detect this kind of data type overflow
******************************************************************************/

