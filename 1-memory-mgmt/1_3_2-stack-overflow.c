#include <stdlib.h>
#include <string.h>

enum { BUFFER_SIZE = 32 };

int copy(char *str, int len) {
	char text_buffer[BUFFER_SIZE];
	/* Do not check len, may lead to stack overflow */
	memcpy(text_buffer,  str,  len);
	return 0;
}

int main()
{
	char *str = "hello world, hello world, hello world, hello world";
	(void)copy(str,  strlen(str));
	return 0;
}


/***************************** Lint Output ***********************************
	memcpy(text_buffer,  str,  len);
test.c  9  Info 732: Loss of sign (arg. no. 3) (int to unsigned int)
_
}
test.c  11  Info 818: Pointer parameter 'str' (line 6) could be declared as
    pointing to const
                                    _
	(void)copy(str,  strlen(str));
test.c  16  Info 713: Loss of precision (arg. no. 2) (unsigned int to int)
******************************************************************************/

/***************************** Lint Conclusion *******************************
	Could not detect this kind of overflow
******************************************************************************/
