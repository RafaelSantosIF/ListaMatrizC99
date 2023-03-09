#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 2

int main(void)
{
    double factor = 0, temp = 0;    
    int i = 0, j = 0, k = 0, m = 2, count = 0;	
	int a[LIN][COL] = {2, 1, 3, 4};

    for(i = 0; i < m - 1; i++)
    {
        if(a[i][i] == 0)
        {
            for(k = i; k < m; k++)
            {
                if(a[k][i] != 0)
                {
                    for(j = 0; j < m; j++)
                    {
                        temp = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = temp;
                    }
                    k = m;
                }
            }
            count++;
        }

        if(a[i][i] != 0)
        {
            for(k = i + 1; k < m; k++)
            {
                factor = -1.0 * a[k][i] /  a[i][i];
                for(j = i; j < m; j++)
                {
                    a[k][j] = a[k][j] + (factor * a[i][j]);
                }
            }
        }
    }
    temp = 1.0;
    for(i = 0; i < m; i++)
        temp *= a[i][i];

    printf("\nDeterminante:\n");
    if(count % 2 == 0)
        printf("%8.3f \n", temp);
    else
        printf("%8.3f \n", -1.0 * temp);

    return 0;
}
