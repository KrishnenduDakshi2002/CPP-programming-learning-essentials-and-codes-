#include <stdio.h>
#include <string.h>

int main()
{

    int cols = 9, rows = 9;
    int n = -1,p =5;
    for (int i = 0; i < (rows / 2) + 1; i++)
    {

        for (int j = i; j < (cols / 2)+1; j++)
        {
            printf("%c", '*');
        }

        for (int j = 0; j < (2 * n + 1); j++)
        {
            printf("%c", ' ');
        }

        for (int j = i; j < (cols / 2)+1; j++)
        {
            if(j==0)continue;
            printf("%c", '*');
        }
        n++;
        printf("\n");
    }

    for (int i = 0; i < (rows / 2); i++)
    {
        for(int j=i+2;j>0;j--)
        {
            printf("%c", '*');
        }

        for(int j=p;j>0;j--)
        {
            printf("%c", ' ');
        }

        for(int j=i+2;j>0;j--)
        {
            if(j==5)continue;
            printf("%c", '*');
        }
        p = p-2;
        printf("\n");
    }
    return 0;
}