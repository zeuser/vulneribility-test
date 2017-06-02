#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE  32
#define COPY_LEN    48

int copy(const char *str) {
    char *text_buffer = (char *)malloc(BUFFER_SIZE);
    if(text_buffer == NULL) {
        return -1;
	}
	/* Do not check len, may lead to buffer overflow */
	memcpy(text_buffer, str, COPY_LEN);
    free(text_buffer);
	return 0;
}

const char *cstr = "Hello world, hello world, hello world.\n";
int main()
{
	(void)copy(cstr);
	return 0;
}


/***************************** Lint Output ***********************************
	memcpy(text_buffer, str, COPY_LEN);
test.c  13  Warning 539: Did not expect positive indentation from line 9
test.c  13  Warning 669: Possible data overrun for function 'memcpy(void *,
    const void *, unsigned int)', argument 3 (size=48) exceeds argument 1
    (size=32) [Reference: file test.c: lines 8, 13]
Info 843: Variable 'cstr' (line 18, file test.c) could be declared as const
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Effective detect this kind of overflow
******************************************************************************/

