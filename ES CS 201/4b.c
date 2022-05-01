#include <stdio.h>
int main()
{
    int i = 1, j = 2, k = 3;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                if (i != j && i != k && j != k)
                {
                    printf("%d%d%d", i, j, k);
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
