#include <stdlib.h>

/* return y = Ax */
int *matvec(int **A, int *x, int n)
{
	int *y = malloc(n * sizeof(int));
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			y[i] += A[i][j] * x[j];
	return y;
}


/***************************** Lint Output ***********************************
	int *y = malloc(n * sizeof(int));
test.c  6  Info 737: Loss of sign in promotion from int to unsigned int
                                              _
			y[i] += A[i][j] * x[j];
test.c  10  Warning 613: Possible use of null pointer 'y' in left argument to
    operator '[' [Reference: file test.c: line 6]
_
}
test.c  12  Info 818: Pointer parameter 'A' (line 4) could be declared as
    pointing to const
test.c  12  Info 818: Pointer parameter 'x' (line 4) could be declared as
    pointing to const
Info 714: Symbol 'matvec(const int **, int *, int)' (line 4, file test.c) not
    referenced
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Effective detect possible use of null ponter 'y'
******************************************************************************/
