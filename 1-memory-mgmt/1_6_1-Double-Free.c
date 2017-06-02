#include <stdlib.h>
#include <string.h>

enum { BUFFER_SIZE = 32 };
int f(char *str, int len) {
    char *text_buffer = (char *)malloc(BUFFER_SIZE);
	if(len > BUFFER_SIZE)
		free(text_buffer);
    /* Do something here */
	free(text_buffer);
	return 0;
}


/***************************** Lint Output ***********************************
	free(text_buffer);
test.c  9  Warning 449: Pointer variable 'text_buffer' previously deallocated
    [Reference: file test.c: lines 5, 7]
_
}
test.c  11  Info 715: Symbol 'str' (line 4) not referenced
test.c  11  Info 818: Pointer parameter 'str' (line 4) could be declared as
    pointing to const
Info 714: Symbol 'f(char *, int)' (line 4, file test.c) not referenced
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Effective detect possible double free problem
******************************************************************************/
