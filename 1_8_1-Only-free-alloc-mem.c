#include <stdlib.h>
#include <string.h>
#include <stdio.h>
 
enum { MAX_ALLOCATION = 1000 };
 
int main(int argc, const char *argv[]) {
  char *c_str = NULL;
  size_t len;
 
  if (argc == 2) {
    len = strlen(argv[1]) + 1;
    if (len > MAX_ALLOCATION) {
      /* Handle error */
    }
    c_str = (char *)malloc(len);
    if (c_str == NULL) {
      /* Handle error */
    }
    strcpy(c_str, argv[1]);
  } else {
    c_str = "usage: $>a.exe [string]";
    printf("%s\n", c_str);
  }
  free(c_str);
  return 0;
}


/***************************** Lint Output ***********************************
    strcpy(c_str, argv[1]);
test.c  20  Warning 586: function 'strcpy' is deprecated. This function is
    unsafe
test.c  20  Warning 668: Possibly passing a null pointer to function
    'strcpy(char *, const char *)', arg. no. 1 [Reference: file test.c: lines
    16, 17]
             _
  free(c_str);
test.c  25  Warning 673: Possibly inappropriate deallocation (free) for
    'constant' data
_
}
test.c  27  Info 818: Pointer parameter 'argv' (line 7) could be declared as
    pointing to const
******************************************************************************/

/***************************** Lint Conclusion ********************************
  Effective detect multiple mem free problem in this case
******************************************************************************/
