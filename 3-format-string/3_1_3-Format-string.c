#include <stdio.h>

char *str = "hello world.\n";

void MayOverrun(char *strs)
{
	char buf[4];

	sprintf(buf, "%s",  strs);
}

int main()
{
	MayOverrun(str);
	return 0;
}


/***************************** Lint Output ***********************************
	Info 843: Variable 'str' (line 3, file test.c) could be declared as const
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Could not detect this kind of format string problem
******************************************************************************/

