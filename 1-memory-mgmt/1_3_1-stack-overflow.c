#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE  32
#define COPY_LEN    33

const char *cstr = "Hello world, hello world, hello world.\n";
int f(const char *str) {
	char text_buffer[BUFFER_SIZE];
	/* COPY_LEN exceed buffer size, lead to stack overflow */
	memcpy(text_buffer, str, COPY_LEN);
	return 0;
}

int main()
{
	(void)f(cstr);
	return 0;
}


/***************************** Lint Output ***********************************
	memcpy(text_buffer, str, COPY_LEN);
test.c  11  Warning 419: Apparent data overrun for function 'memcpy(void *,
    const void *, unsigned int)', argument 3 (size=33) exceeds argument 1
    (size=32) [Reference: file test.c: line 11]
Info 843: Variable 'cstr' (line 7, file test.c) could be declared as const
******************************************************************************/

/***************************** Lint Conclusion *******************************
	Effective detect this kind of overflow
******************************************************************************/
