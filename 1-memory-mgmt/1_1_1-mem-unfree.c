#include <stdlib.h>

enum { BUFFER_SIZE = 32 };
int f(void)
{
	char *text_buffer = (char *)malloc(BUFFER_SIZE);
	if (text_buffer == NULL) 
	{
	    return -1;
	}
	return 0;
}

int main()
{
	(void)f();
	return 0;
}

/***************************** Lint Output ***********************************
                _
	return 0;
test.c  11  Warning 429: Custodial pointer 'text_buffer' (line 6) has not been
    freed or returned
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Effective detect memory unfree problem
******************************************************************************/
