#include <stdio.h>

void count( void )
{
    int k, i;
    
    for (i = 0; i < 10; i++)
    {
        k = k + 1;
    }
    printf("%d", k);
}

int main()
{
	count();
	return 0;
}


/***************************** Lint Output ***********************************
        k = k + 1;
test.c  9  Warning 530: Symbol 'k' (line 5) not initialized
******************************************************************************/

/***************************** Lint Conclusion ********************************
	Effective detect k not initialized problem
******************************************************************************/
