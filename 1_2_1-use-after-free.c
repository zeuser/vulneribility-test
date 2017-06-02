#include <stdlib.h>
#include <string.h>

enum { BUFFER_SIZE = 32 };
int f(char *str, int len) {
    char *text_buffer = (char *)malloc(BUFFER_SIZE);
    if(text_buffer == NULL) {
        return -1;
    }

	free(text_buffer);
	memcpy(text_buffer, str, len);
	return 0;
}

/***************************** Lint Output ***********************************
	free(text_buffer);
test.c  11  Warning 539: Did not expect positive indentation from line 7
                                    _
	memcpy(text_buffer, str, len);
test.c  12  Info 732: Loss of sign (arg. no. 3) (int to unsigned int)
test.c  12  Warning 449: Pointer variable 'text_buffer' previously deallocated
    [Reference: file test.c: line 11]
_
}
test.c  14  Info 818: Pointer parameter 'str' (line 5) could be declared as
    pointing to const
Info 714: Symbol 'f(char *, int)' (line 5, file test.c) not referenced
******************************************************************************/

/***************************** Lint Conclusion*********************************
	Effective detect use after free problem
******************************************************************************/
