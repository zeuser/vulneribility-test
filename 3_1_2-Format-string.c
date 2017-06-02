#include <stdio.h>


void MayOverrun()
{
	char buf[4];
	char *str = "hello world.\n";
	sprintf(buf, "%s",  str);
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
