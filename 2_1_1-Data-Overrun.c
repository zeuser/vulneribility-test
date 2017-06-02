#include <stdio.h>
int main()
{ 
  char ch; 
  for(ch = 0; ch < 256; ch++)
    printf("%c.\n",  ch); 
  return 0;
}


/***************************** Lint Output ***********************************
  for(ch = 0; ch < 256; ch++)
test.c  5  Warning 650: Constant '256' out of range for operator '<'
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Effective detect Data Over Run problem
******************************************************************************/
