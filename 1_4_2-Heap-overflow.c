#include <stdlib.h>
#include <string.h>

enum { BUFFER_SIZE = 32 };
int copy(const char *str, int len) {
    char *text_buffer = (char *)malloc(BUFFER_SIZE);
    if(text_buffer == NULL) {
        return -1;
	}
	/* Do not check len, may lead to buffer overflow */
	memcpy(text_buffer, str, len);
    free(text_buffer);
	return 0;
}

int main()
{
	char *str = "hello world, hello world, hello world, hello world";
	(void)copy(str, strlen(str));
	return 0;
}

/***************************** Lint Output ***********************************
	memcpy(text_buffer, str, len);
test.c  11  Warning 539: Did not expect positive indentation from line 7
test.c  11  Info 732: Loss of sign (arg. no. 3) (int to unsigned int)
                                   _
	(void)copy(str, strlen(str));
test.c  19  Info 713: Loss of precision (arg. no. 2) (unsigned int to int)
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Could not detect this kind overflow
******************************************************************************/
