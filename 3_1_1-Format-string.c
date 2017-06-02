#include <stdio.h>

void MayOverrun()
{
	char buf[4];
	sprintf(buf, "%s",  "hello world.");
}

int main()
{
	MayOverrun();
	return 0;
}


/***************************** Lint Output ***********************************
	No output
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Could not detect this kind of format string problem
******************************************************************************/
