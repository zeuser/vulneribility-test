#include <stdio.h>
int main()
{ 
  int i; 
  int a[] = {1,2,3}; 
  int n = sizeof(a)/sizeof(int);
  for(i = 0; i <=n ; i++)        // here i should less than n
    printf("a[%d] = %d\n", i, a[i]); 
  return 0;
}


/***************************** Lint Output ***********************************
    printf("a[%d] = %d\n", i, a[i]); 
test.c  8  Warning 661: Possible access of out-of-bounds pointer (1 beyond end
    of data) by operator '[' [Reference: file test.c: lines 6, 7, 8]
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Effective detect this kind of out of bound problem
******************************************************************************/
